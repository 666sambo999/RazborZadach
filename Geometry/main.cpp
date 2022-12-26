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
	// №1 Треугольник 
#ifdef TREUGOL
	int n;
	cout << "Введите число: "; cin >> n; // Можно использовать одинаковае имена I, не будет ругаться. 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TREUGOL

	// №0 Квадрат 
#ifdef KVADRO
	int n;
	cout << "Введите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // KVADRO

	// №2 Перевернутый треуголник 
#ifdef OBR_TREUG
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
#endif // obe

	// №3 Обратный треугоник (на уменьшение)
	
#ifdef UMEN_TREUGOL
		int n;
		cout << "Введите количество итераций: "; cin >> n;
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
	
	// №4 треугольник на увеличение 
		
#ifdef PR_TREUG
		int n;
		cout << "Введите количество итераций: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int a = i; a <= n; a++)cout << " ";
			for (int j = 0; j <= i; j++)cout << "*";
			cout << endl;
		}
#endif // PR_TREUG

		
		
// №6 Плюсы и минусы 
#ifdef PLUS_MINUS
		int n;
		cout << "Введите количество итераций: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				//if ((j+i)%2) 
				//if (i % 2 == j % 2)cout << "+ "; else cout << "- "; // можно по другому 
				//(i % 2 == j % 2)?cout << "+ " : cout << "- "; // это тернарный оператор 
				//i % 2 == j % 2 ? cout << "+ " : cout << "- "; // это тоже тернарный оператор 
				cout << (i % 2 == j % 2 ? "+ " : "- "); // вот так пишется тернарный оператор  
			}
		}

		
		// Ромб из звездочек на определенное количество 
		//int i,j,n=9;
		//int center = n / 2;
		//cout << "Введите количество итераций: "; cin >> n; 
			//for (i = 0; i < n; i++)
			{
				//for (j = 0; j <= n; j++)
				{
					//if (i <= center)
					{
					// Верхняя половина ромба
						//if (j >= center - i && j <= center + i)
						//cout << "*";
						//else cout << " ";
					}
					//else 
					{
					// Нижняя половина ромба
					//if (j >= center + i - n + 1 && j <= center - i + n - 1)
						//cout << "*";
					//else
						//cout << " ";
					}
			}
			//cout << endl;
		}

#ifdef ROMB
			// Ромб (не получился пока) 
			int n;
			cout << "Введите количество: "; cin >> n;
			for (int i = 0; i < n; i++)
			{
				// верхний ромб 
				for (int j = i; j < n; j++) cout << " ";
				cout << "/" << "\\" << endl;
				//for (int a = i; a < n; a++) cout << "  ";
				for (int a = 0; a < i; a++) cout << " ";
				cout << "\\" << "/" << endl;
			}

#endif // ROMB

			// РОМБ №2 на занятии
			int n; 
			cout << "Введите размер: "; cin >> n; 
			for (int i = 0; i < n; i++)
			{
				// верхняя часть 
				for (int j = i; j < n; j++) cout << " "; cout << "/";	  // пробелы находяться на отрезке b
				for (int j = 0; j <i; j++) cout << "  "; cout << "\\";  // или i *2 в for, будет тоже самое и будет верхний ромб. 
				cout << endl;
			}
				// нижняя часть 
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < i; j++) cout << " "; 
				cout << " \\";  // или пишем <=i или добавим пробел к \\ будет также
				for (int j = i; j < n-1; j++) cout << "  ";  // здесь мы n-1 чтобы сместился на 1 влево. 
				cout << "/"; // также мы можем написать с двойным пробелом или уможить на 2в for
				cout << endl;
			}
			// вот тебе и ромб. 
#endif // PLUS_MINUS


			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			// Шахматная доска из звездочек 
			int n;
			cout << "Введите число: "; cin >> n;
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

			
				
				
							
					
								
						
						


			



