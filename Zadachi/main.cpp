#include <iostream>
#include <conio.h>

using namespace std;
//#define ZADACHA
//#define TICKEN
//#define SHOOTER
#define Escape 27
#define Enter 13
#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77

//#define FACKTOR
//#define STEPEN
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

#ifdef SHOOTER
	char key;
	do
	{
		key = _getch();
		// cout << (int)key << "\t" << key << endl;
		switch (key)
		{

		case 'w':case 'W':case UP_ARROW: cout << "������" << endl; break;
		case 'a':case 'A':case LEFT_ARROW: cout << "�����" << endl; break;
		case 's':case 'S':case DOWN_ARROW: cout << "�����" << endl; break;
		case 'd':case 'D':case RIGHT_ARROW: cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case Enter: cout << "�����\a" << endl; break; // \� - ��� alarm(����� ��������� ������� � �������)
		case Escape: cout << "�����" << endl;
		case -32: break;
		default: cout << "Error" << endl;
		}

	} while (key != Escape);
#endif // SHOOTER


	// ��������� 
#ifdef FACKTOR
	int n;
	int factorial = 1;
	int i = 1;
	cout << "������� �����: "; cin >> n;
	while (i <= n)
	{
		factorial *= i;
		i++;
	}
	cout << factorial;
#endif // FACKTOR


	// ���������� � ������� 
		
#ifdef STEPEN
	int a, b, c, d;
	cout << "������� ��������� �������: " << endl; cin >> a;
	cout << "������� ���������� ���������: " << endl; cin >> b;
	c = a;

	if (b == 0)
	{
		cout << "�������" << 1 << endl;
	}

	while (b > 1)
	{
		c *= a;
		b--;
	}

	cout << "�������: " << c << endl;
#endif // STEPEN

	// ASCII ���  

	int i;
	while (i <= 255)
	{
		
		cout << char(i) << endl; cin >> i; 
		i = i + 1;	 
	}
	
	

}







