# include <iostream>

using std::cin;
using std::cout;
using std::endl;


using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)cout << " ";
		{
			for (int a = 0; a < n; a++) cout << " "; 
			{
				//if (i%2==j%2)
				//cout << "* ";
				//else cout << " ";
			}
			cout << "*" << endl;
		}
		cout << endl;
	}



}