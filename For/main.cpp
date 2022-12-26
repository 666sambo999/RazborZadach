#include <iostream>
#include <conio.h>
#include <Windows.h>

using std::cin;
using std::cout;
using std::endl;

//#define FACTORIAL 
//#define STEPEN 
//#define CODE 
//#define FIBANACHI 
//#define CHISLO 
//#define TABLE_PIF
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef FACTORIAL
	int n;			// число  формула = 5! = 1*2*3*4*5 int n и int f
	int i;			// счетчик если поменять int поменять на long int будет правильно выводить число
	cout << "Введите число: "; cin >> n; //  double или int 
	double f = 1;			// факториал f нужно присвоить 1, если ноль - то будет 0.
	for (int i = 1; i <= n; i++)	
	{
		f = f * i; // или f*=i составное присваивание // cout <<i<< "! =";
	}												// f*=i;
	cout << "Факториал: " << f << endl;				// cout <<f<<endl;
#endif // FACTORIAL

#ifdef STEPEN
	//int a, b, i, n; // где а-основание степени, b- показатель степени, i- счетчик
	//cout << "Введите основание степени: "; 
	//cout << "Введите показатель степени: ";  
	//n = a;
	//if (b == 0)
	{
		//cout << "Результат: " << 1 << endl;
	}

	//for (i = 1; i < b; i++)
	{
		//n *= a;
		//cout << "Результат: " << n << endl;
	}
	double a; // основание степени
	int n; // показатель степени 
	double N = 1; // результат стерени 
	cout << "Введите основание степени: " << endl; cin >> a;
	cout << "Введите показатель степени: " << endl; cin >> n;
	cout << a << "^" << n << "=";
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl; 

#endif // STEPEN


#ifdef CODE
	//char a;						// до делать надо 
	//for (int i = 0; i < 256; i++)
	{
		//char a = i;
		//cout << i << "   " << a << endl;
	}

	// 2 вариант
	cout << "Таблица ASCII - символов:\n";
	setlocale(LC_ALL, "C"); // устанавливает кодировку по умолчанию 
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "");
	cout << "Вот и сказочке конец" << endl;

#endif // CODE

	
#ifdef FIBANACHI
	//int a = 0;
	//int b = 1;
	//int num_temp;
	//int num_next = 1;
	//int n;
	//cout << "Введите число: "; cin >> n;
	//if (n >= 1)
		//cout << 0 << " ";
	//if (n >= 2)
		//cout << 1 << " ";
	//for (int i = 0; i < n - 2; i++)
	{
		//num_next = a + b;
		//cout << num_next << " ";
		//a = b;
		//b = num_next;
	}
	// cout << endl;
	// 2 вариант 
	int n;
	cout << " Введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	#endif // FIBANACHI

#if CHISLO
	
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true; // Изначально предположим, что число простое, но это нужно проверить
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if(simple)cout << i << "\t";
	}
	cout << endl;
#endif // CHISLO

#ifdef TABLE_PIF
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
	}

	//for (int h = 0; h < 24; h++)
	{
		//for (int m = 0; m < 60; m++)
		{
			//for (int s = 0; s < 60; s++)
			{
				//system("CLS");
				//cout << h << ":" << m << ":" << s << endl;
				//Sleep(100);
			}
		}
	}
#endif // tab

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}



}
	
	
	
		








