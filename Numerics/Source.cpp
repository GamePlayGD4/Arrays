#include <iostream>
using namespace std;

//#define BINARY
void main()
{
	setlocale(LC_ALL, "russian");
	int decimal;
	cout << "¬ведите дес€тичное число: "; cin >> decimal;
#ifdef BINARY


	const int CAPACITY = 32;  //ћаксимально возможна€ разр€дность двоичного числа
	bool bin[CAPACITY] = {};
	int i = 0;
	for (; decimal; decimal /= 2)
	{
		bin[i++] = decimal % 2;
	}

	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
#endif

	const int MAX_HEX_CAPACITY = 8;
	char hex[MAX_HEX_CAPACITY] = {};

	int i = 0;
	for (; decimal; decimal /= 16)
	{
		hex[i++] = decimal % 16 < 10 ? decimal % 16 + 48 : decimal % 16 + 55;
	}
	for (--i; i >= 0; i--) cout << hex[i];
	//for (--i; i >= 0; i--) cout << char(hex[i < 10 ? hex[i] + 48 : hex[i] + 55]);
	cout << endl;
}