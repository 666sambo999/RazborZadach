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

	// РАЗБОР ЗАДАЧ 

#ifdef ZADACHA
	int number; // число введенное с клавиатуры 
	int revers = 0; // число записанное наоборот 
	cout << "Введите число: "; cin >> number;
	int buffer = number; // копия числа, введенного с клавиатуры 
	while (buffer)
	{
		revers *= 10;
		revers += buffer % 10;		// сохранияем младший разряд в revers
		buffer /= 10;				// убираем младщий разряд из buffer
	}
	cout << number << endl;
	cout << revers << endl;
	if (revers == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Обычное число" << endl;
	}

#endif // zadacha

#ifdef TICKEN
	int number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	cout << "Введите номер билета: " << endl; cin >> number;
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

		case 'w':case 'W':case UP_ARROW: cout << "Вперед" << endl; break;
		case 'a':case 'A':case LEFT_ARROW: cout << "Влево" << endl; break;
		case 's':case 'S':case DOWN_ARROW: cout << "Назад" << endl; break;
		case 'd':case 'D':case RIGHT_ARROW: cout << "Вправо" << endl; break;
		case ' ': cout << "Прыжок" << endl; break;
		case Enter: cout << "Огонь\a" << endl; break; // \а - это alarm(выход звукового сигнала в консоль)
		case Escape: cout << "Выход" << endl;
		case -32: break;
		default: cout << "Error" << endl;
		}

	} while (key != Escape);
#endif // SHOOTER


	// Факториал 
#ifdef FACKTOR
	int n;
	int factorial = 1;
	int i = 1;
	cout << "Введите число: "; cin >> n;
	while (i <= n)
	{
		factorial *= i;
		i++;
	}
	cout << factorial;
#endif // FACKTOR


	// Возведение в степень 
		
#ifdef STEPEN
	int a, b, c, d;
	cout << "Введите основание степени: " << endl; cin >> a;
	cout << "Введите показатель основания: " << endl; cin >> b;
	c = a;

	if (b == 0)
	{
		cout << "Степень" << 1 << endl;
	}

	while (b > 1)
	{
		c *= a;
		b--;
	}

	cout << "Степень: " << c << endl;
#endif // STEPEN

	// ASCII код  

	int i;
	while (i <= 255)
	{
		
		cout << char(i) << endl; cin >> i; 
		i = i + 1;	 
	}
	
	

}







