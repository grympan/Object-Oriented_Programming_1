#include <iostream>
using namespace std;
#define R 3
#define C 4
void main()
{
	int a[R][C] = {
		{10, 20, 30, 40},
		{20, 40, 60, 80},
		{10, 30, 50, 70}
	};

	int b[R][C] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	int c[R][C];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout << c[i][j] << " ";
		}
		
		cout << endl;
	}
}