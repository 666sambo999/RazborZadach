#include <iostream>
#include <conio.h>

using namespace std;
//#define ZADACHA
//#define TICKEN

void main()
{
	setlocale(LC_ALL, "Rus");

	// ������ ����� 

#ifdef ZADACHA
	int number; // ����� ��������� � ���������� 
	int revers = 0; // ����� ���������� �������� 
	cout << "������� �����: "; cin >> number;
	int buffer = number; // ����� �����, ���������� � ���������� 
	while (buffer)
	{
		revers *= 10;
		revers += buffer % 10;		// ���������� ������� ������ � revers
		buffer /= 10;				// ������� ������� ������ �� buffer
	}
	cout << number << endl;
	cout << revers << endl;
	if (revers == number)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}

#endif // zadacha
	
#ifdef TICKEN
	int number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	cout << "������� ����� ������: " << endl; cin >> number;
	while (number >= 1000)
	{
		sum1 += number % 10;
		number /= 10;
	}
	while (number)
	{
		sum2 += number % 10;
		number /= 10;
	}
	if (sum1 == sum2)
	{
		cout << "JackPot" << endl;
	}
	else
	{
		cout << "May be the next time" << endl;
	}
#endif // TICKEN
	
	char key;
	do 
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (true);














}