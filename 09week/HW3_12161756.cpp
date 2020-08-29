#include <iostream>
using namespace std;
#define ROW 3
#define COL 4
void main()
{
	int a[ROW][COL] = { {90, 85, 95, 100},
	{75, 95, 80, 90},
	{90, 80, 70, 60}
	};

	int i, j;

	cout << endl << "-----------------------\n";

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
			cout << "    " << a[i][j] << " ";
	cout <<endl;
	}
}