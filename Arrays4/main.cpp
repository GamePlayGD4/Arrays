#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    const int ROWS = 3; 
    const int COLS = 4; 

    int arr[ROWS][COLS] = {
        {5, 2, 9, 4},
        {1, 7, 10, 8},
        {6, 1, 2, 5}
    };

    int minVal = arr[0][0];
    int maxVal = arr[0][0];

    // ������ �� ����� ������� ��� ������ min � max
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
            }
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }

    cout << "����������� ��������: " << minVal << endl;
    cout << "������������ ��������: " << maxVal << endl;
}