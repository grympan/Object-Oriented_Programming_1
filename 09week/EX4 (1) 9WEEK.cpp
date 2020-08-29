#include <iostream>
using namespace std;
int main()
{
	int gugu[9][9];
	int i, k;

	for (i = 0; i < 9; i++)
		for (k = 0; k < 9; k++)
			gugu[i][k] = (i+1)*(k+1);

	for (i = 0; i < 9; i++)
	{
		for (k = 0; k < 9; k++)
		{
			cout << k + 1 << "X" << i + 1 << "=" << gugu[i][k] << " ";
		}

		cout << endl;
	}
}