#include <iostream>
#include <cstdlib>  

using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    const int size = 10;
    int arr[size];

    // Заполнение массива случайными числами от 0 до 10
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 11; // числа от 0 до 10 включительно
    }

    // Подсчет количества повторений каждого элемента
    int counts[11] = { 0 }; 

    for (int i = 0; i < size; ++i) {
        counts[arr[i]]++;
    }

    // Вывод массива
    cout << "Массив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Поиск и вывод повторяющихся значений
    cout << "Повторяющиеся значения:\n";
    bool hasDuplicates = false;
    for (int num = 0; num <= 10; ++num) {
        if (counts[num] > 1) {
            cout << num << " встречается " << counts[num] << " раз(а)\n";
            hasDuplicates = true;
        }
    }

    if (!hasDuplicates) {
        cout << "Нет повторяющихся значений.\n";
    }

}