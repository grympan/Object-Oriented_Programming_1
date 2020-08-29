#include <iostream>
using namespace std;
void main()
{
	int num;
	cout << "How many numbers you want to add? : ";
	cin  >> num;
	cout << "Enter " << num << " numbers : ";

	int num2, sum = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> num2;
		sum =  num2 + sum;
	}

	cout << "the sum is " << sum << endl;
}