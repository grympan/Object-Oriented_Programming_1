#include <iostream>
using namespace std;
void main()
{
	int a[5] = {85, 90, 75, 100, 95};
	int tot=0;
	double avg;

	int count;

	for(int i = 0; i < 5; i++)
		tot += a[i];

	count = sizeof(a) / sizeof(int);
	avg = tot / count;

	cout << "Total = " << tot << "\n";
	cout << "Average = " << avg << "\n";
}