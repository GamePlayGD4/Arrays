#include <iostream>
using namespace std;
#define ARRAYS_1

void main()
{
	setlocale(LC_ALL, "russian");
	const int SIZE = 5;
	int arr[SIZE];

#ifdef ARRAYS_1
	cout << "������� �������� �������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;


#endif 

	int minRand, maxRand;
	cout << "������� ����������� ��������� �����: "; cin >> minRand;
	cout << "������� ������������ ��������� �����: "; cin >> maxRand;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % maxRand;
	}
	cout << endl;
}