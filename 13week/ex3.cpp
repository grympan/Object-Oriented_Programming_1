#include <iostream>
using namespace std;

int main()
{
	int cnt;
	cin >> cnt;

	int *p_numbers = new int[cnt];

	for(int i = 0; i < cnt; i++)
		*(p_numbers + i) = i;

	for(int i = 0; i < cnt; i++)
		cout << p_numbers[i];
	
	return 0;
}

//delete ¾²±â~