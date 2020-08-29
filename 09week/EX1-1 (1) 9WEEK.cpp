#include <iostream>
using namespace std;
int main()
{
	int aa[4];
	int sum = 0;
	int i;

	for (i=0;i<=3;i++)
	{
		cout << "Enter the "<< i+1 << "th number : ";
		cin  >> aa[i];
	}

	sum = aa[0] + aa[1] + aa[2] + aa[3];

	cout << "Sum : " << sum << endl;
}