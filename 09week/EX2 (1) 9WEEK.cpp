#include <iostream>
using namespace std;
int main()
{
	int aa[100];
	int bb[100];
	int i, j;

	for(i = 0; i < 100; i++)
	{
		aa[i] = 2 * i ;
		bb[i] = 198 - aa[i];
	}

	cout << "bb[0]ดย " << bb[0] << ", bb[99]ดย " << bb[99] << " ภิทยตส" << endl;
}