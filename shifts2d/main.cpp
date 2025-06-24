#include <iostream>
#include <cstdlib>  // дл€ rand() и srand()

using namespace std;

const int ROWS = 4;
const int COLS = 4;

// ‘ункци€ дл€ проверки, есть ли число в массиве
bool isNumberInArray(int* arr, int size, int num) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}

int main() {
    // »нициализаци€ генератора случайных чисел с фиксированным seed
    srand(12345); // ћожно заменить на любое число или оставить без вызова

    int totalNumbers = ROWS * COLS;
    int* usedNumbers = new int[totalNumbers]; // массив дл€ хранени€ уже использованных чисел
    int count = 0;

    int** array = new int* [ROWS];
    for (int i = 0; i < ROWS; ++i) {
        array[i] = new int[COLS];
    }

    // «аполн€ем массив уникальными случайными числами
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            int num;
            do {
                num = rand() % (totalNumbers * 10); // диапазон чисел, можно увеличить
            } while (isNumberInArray(usedNumbers, count, num));
            array[i][j] = num;
            usedNumbers[count++] = num;
        }
    }

    // ¬ывод массива
    cout << "ƒвумерный массив с уникальными случайными числами:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << array[i][j] << "\t";
        }
        cout << "\n";
    }

    // ќсвобождение пам€ти
    delete[] usedNumbers;
    for (int i = 0; i < ROWS; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}