#include <iostream>



using namespace std; 
using std::cin;
using std::endl;
using std::cout;

#define UPPER_LEFT_ANFLE  (char)218
#define UPPER_RIGHT_ANFLE  (char)191
#define LOWER_LEFT_ANGLE  (char)192
#define LOWER_RIGHT_ANGLE  (char)217
#define HORIZONTAL_LINE  (char)196
#define VERTICAL_LINE  (char)179
#define WHITE_BOX  (char)219	// - "\xDB\xDB"

//#define ASCII
//#define SHESS_SZ

void main ()
{

#ifdef ASCII
	{
		setlocale(LC_ALL, "");
		cout << "ASCII-таблица: \n";
		setlocale(LC_ALL, "C");
		for (int i = 176; i < 224; i++)
		{
			if (i % 16 == 0)cout << endl;
			cout << i << "\t" << (char)i << endl;
		}
	}
#endif // ASCII
	// исход€ из картинки I- \то координата по Y =i
	// j = это по X 
	
	
	int n; 
	cout << "¬ведите размер доски: "; cin >> n; 
	n++;
	setlocale(LC_ALL, "—");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)  // сначало провер€етс€ данное условие, углы провер€ютс€ в перную очередь, тк они редкие 
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANFLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANFLE;
			else if (i == n && j == 0) cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n) cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZONTAL_LINE << HORIZONTAL_LINE; // продлили до квадрата
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else 
				(i % 2 == j % 2)? cout << WHITE_BOX << WHITE_BOX:cout << "  "; // добавили пробелы 
		}  // тернарный оператор 
			cout << endl;
	}
	
#ifdef SHESS_SZ
	// Ўахматна€ доска из звездочек 
	int n;
	cout << "¬ведите число: "; cin >> n;
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

#endif // SHESS_SZ

	// треугольник паскал€


}