#include <iostream>
using namespace std;
void main()
{
	int num, num_of_20 = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		if (num == 20)
			num_of_20++;
	}

	cout << "The number of 20 : " << num_of_20 << endl;
}