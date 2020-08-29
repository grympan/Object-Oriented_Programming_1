#include <iostream>
using namespace std;
void main()
{
	int a[5];
	int max;
	int i;

	cout << "Enter 5 integer numbers\n";

	for (i = 0; i < 5; i++){
		cin >> a[i];
	}

	max = a[0];
	
	for (int i = 1; i <= 4; i++){
		if (a[i] >= max)
			max = a[i];
	
		else
			continue;
	}

	cout << "Maximum number : " << max << "\n";
}