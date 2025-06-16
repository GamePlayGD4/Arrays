#include <iostream>
#include <cstdlib>  

using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    const int size = 10;
    int arr[size];

    // ���������� ������� ���������� ������� �� 0 �� 10
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 11; // ����� �� 0 �� 10 ������������
    }

    // ������� ���������� ���������� ������� ��������
    int counts[11] = { 0 }; 

    for (int i = 0; i < size; ++i) {
        counts[arr[i]]++;
    }

    // ����� �������
    cout << "������: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // ����� � ����� ������������� ��������
    cout << "������������� ��������:\n";
    bool hasDuplicates = false;
    for (int num = 0; num <= 10; ++num) {
        if (counts[num] > 1) {
            cout << num << " ����������� " << counts[num] << " ���(�)\n";
            hasDuplicates = true;
        }
    }

    if (!hasDuplicates) {
        cout << "��� ������������� ��������.\n";
    }

}