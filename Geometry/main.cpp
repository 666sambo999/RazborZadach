# include <iostream>

using std::cin;
using std::cout;
using std::endl;
//# define TREUGOL
//#define KVADRO 
//#define OBR_TREUG
//#define UMEN_TREUGOL
//#define PR_TPEUG
//#define PLUS_MINUS
//#define ROMB

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	// �1 ����������� 
#ifdef TREUGOL
	int n;
	cout << "������� �����: "; cin >> n; // ����� ������������ ���������� ����� I, �� ����� ��������. 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TREUGOL

	// �0 ������� 
#ifdef KVADRO
	int n;
	cout << "������� �����: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // KVADRO

	// �2 ������������ ���������� 
#ifdef OBR_TREUG
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
#endif // obe

	// �3 �������� ��������� (�� ����������)
	
#ifdef UMEN_TREUGOL
		int n;
		cout << "������� ���������� ��������: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int a = 0; a < i; a++)
			{
				cout << " ";
			}
			for (int j = i; j < n; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
#endif // UMEN_TREUGOL
	
	// �4 ����������� �� ���������� 
		
#ifdef PR_TREUG
		int n;
		cout << "������� ���������� ��������: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int a = i; a <= n; a++)cout << " ";
			for (int j = 0; j <= i; j++)cout << "*";
			cout << endl;
		}
#endif // PR_TREUG

		
		
// �6 ����� � ������ 
#ifdef PLUS_MINUS
		int n;
		cout << "������� ���������� ��������: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				//if ((j+i)%2) 
				//if (i % 2 == j % 2)cout << "+ "; else cout << "- "; // ����� �� ������� 
				//(i % 2 == j % 2)?cout << "+ " : cout << "- "; // ��� ��������� �������� 
				//i % 2 == j % 2 ? cout << "+ " : cout << "- "; // ��� ���� ��������� �������� 
				cout << (i % 2 == j % 2 ? "+ " : "- "); // ��� ��� ������� ��������� ��������  
			}
		}

		
		// ���� �� ��������� �� ������������ ���������� 
		//int i,j,n=9;
		//int center = n / 2;
		//cout << "������� ���������� ��������: "; cin >> n; 
			//for (i = 0; i < n; i++)
			{
				//for (j = 0; j <= n; j++)
				{
					//if (i <= center)
					{
					// ������� �������� �����
						//if (j >= center - i && j <= center + i)
						//cout << "*";
						//else cout << " ";
					}
					//else 
					{
					// ������ �������� �����
					//if (j >= center + i - n + 1 && j <= center - i + n - 1)
						//cout << "*";
					//else
						//cout << " ";
					}
			}
			//cout << endl;
		}

#ifdef ROMB
			// ���� (�� ��������� ����) 
			int n;
			cout << "������� ����������: "; cin >> n;
			for (int i = 0; i < n; i++)
			{
				// ������� ���� 
				for (int j = i; j < n; j++) cout << " ";
				cout << "/" << "\\" << endl;
				//for (int a = i; a < n; a++) cout << "  ";
				for (int a = 0; a < i; a++) cout << " ";
				cout << "\\" << "/" << endl;
			}

#endif // ROMB

			// ���� �2 �� �������
			int n; 
			cout << "������� ������: "; cin >> n; 
			for (int i = 0; i < n; i++)
			{
				// ������� ����� 
				for (int j = i; j < n; j++) cout << " "; cout << "/";	  // ������� ���������� �� ������� b
				for (int j = 0; j <i; j++) cout << "  "; cout << "\\";  // ��� i *2 � for, ����� ���� ����� � ����� ������� ����. 
				cout << endl;
			}
				// ������ ����� 
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < i; j++) cout << " "; 
				cout << " \\";  // ��� ����� <=i ��� ������� ������ � \\ ����� �����
				for (int j = i; j < n-1; j++) cout << "  ";  // ����� �� n-1 ����� ��������� �� 1 �����. 
				cout << "/"; // ����� �� ����� �������� � ������� �������� ��� ������� �� 2� for
				cout << endl;
			}
			// ��� ���� � ����. 
#endif // PLUS_MINUS


			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			// ��������� ����� �� ��������� 
			int n;
			cout << "������� �����: "; cin >> n;
			for (int i = 0; i < n; i++)
			{
				for (int jj = 0; jj < n; jj++)
				{
					for (int j = 0; j < n; j++)
					{
						for (int ii = 0; ii < n; ii++)
						{
							((i + j) % 2) ? (cout << ' ') : (cout << '*');
						}
					}
					cout << '\n';
				}
			}
			cout << "\n\n\n";
}

			
				
				
							
					
								
						
						


			



