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
	int n;			// �����  ������� = 5! = 1*2*3*4*5 int n � int f
	int i;			// ������� ���� �������� int �������� �� long int ����� ��������� �������� �����
	cout << "������� �����: "; cin >> n; //  double ��� int 
	double f = 1;			// ��������� f ����� ��������� 1, ���� ���� - �� ����� 0.
	for (int i = 1; i <= n; i++)	
	{
		f = f * i; // ��� f*=i ��������� ������������ // cout <<i<< "! =";
	}												// f*=i;
	cout << "���������: " << f << endl;				// cout <<f<<endl;
#endif // FACTORIAL

#ifdef STEPEN
	//int a, b, i, n; // ��� �-��������� �������, b- ���������� �������, i- �������
	//cout << "������� ��������� �������: "; 
	//cout << "������� ���������� �������: ";  
	//n = a;
	//if (b == 0)
	{
		//cout << "���������: " << 1 << endl;
	}

	//for (i = 1; i < b; i++)
	{
		//n *= a;
		//cout << "���������: " << n << endl;
	}
	double a; // ��������� �������
	int n; // ���������� ������� 
	double N = 1; // ��������� ������� 
	cout << "������� ��������� �������: " << endl; cin >> a;
	cout << "������� ���������� �������: " << endl; cin >> n;
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
	//char a;						// �� ������ ���� 
	//for (int i = 0; i < 256; i++)
	{
		//char a = i;
		//cout << i << "   " << a << endl;
	}

	// 2 �������
	cout << "������� ASCII - ��������:\n";
	setlocale(LC_ALL, "C"); // ������������� ��������� �� ��������� 
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "");
	cout << "��� � �������� �����" << endl;

#endif // CODE

	
#ifdef FIBANACHI
	//int a = 0;
	//int b = 1;
	//int num_temp;
	//int num_next = 1;
	//int n;
	//cout << "������� �����: "; cin >> n;
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
	// 2 ������� 
	int n;
	cout << " ������� ���������� �����: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	#endif // FIBANACHI

#if CHISLO
	
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true; // ���������� �����������, ��� ����� �������, �� ��� ����� ���������
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
	
	
	
		








