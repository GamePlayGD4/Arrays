#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "russian");
	const int ROWS = 3;
	const int COLS = 3;

	int arr[ROWS][COLS] =
	{
		{1, 2, 3},
		{1, 2, 3},
		{1, 2, 3},
	};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
		cout << endl;
	}
	//сумма элементов двумерного массива
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}

	}
	cout << "Сумма элементов двумерного массива: " << sum << endl;
	cout << "Среднее арифметическое двумерного массива: " << sum / (ROWS * COLS) << endl;


}