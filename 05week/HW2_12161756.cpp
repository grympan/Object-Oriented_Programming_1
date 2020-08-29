#include <iostream>
using namespace std;
void main()
{
	int Min_Num, Max_Num;
	int Menu_Num = 5; // 0이 아닌 임의의 값

	cout << "Input Min number : ";
	cin >> Min_Num;
	cout << "Input Max number : ";
	cin >> Max_Num;

	while (Menu_Num != 0)
	{
		cout << "\n" << "================================================" << "\n" << endl;
		cout << "1. Sum of Min ~ Max\n";
		cout << "2. Product of Min ~ Max\n";
		cout << "3. Even number from Min to Max\n";
		cout << "4. Odd Number from Min to Max\n";
		cout << "\n" << "================================================" << "\n" << endl;
		cout << "Select the Menu : ";
		cin >> Menu_Num;


		if (Menu_Num == 1)
		{
			int result = 0;
			for (int i = Min_Num; i <= Max_Num; i++)
			{
				result = result + i;
			}
			cout << "Sum of " << Min_Num << " ~ " << Max_Num << " : " << result << endl;
		}

		else if (Menu_Num == 2)
		{
			int result = 1;
			for (int i = Min_Num; i <= Max_Num; i = i + 1)
			{
				result = result * i;
			}
			cout << "Product of " << Min_Num << " ~ " << Max_Num << " : " << result << endl;
		}

		else if (Menu_Num == 3)
		{
			int result = 0;
			if (Min_Num % 2 == 1 || Min_Num % 2 == -1)
			{
				for (int i = Min_Num + 1; i <= Max_Num; i = i + 2)
					cout << i << " ";
			}
			else if (Min_Num % 2 == 0)
			{
				for (int i = Min_Num; i <= Max_Num; i = i + 2)
					cout << i << " ";
			}
		}

		else if (Menu_Num == 4)
		{
			int result = 0;
			if (Min_Num % 2 == 1 || Min_Num % 2 == -1)
			{
				for (int i = Min_Num; i <= Max_Num; i = i + 2)
					cout << i << " ";
			}
			else if (Min_Num % 2 == 0)
			{
				for (int i = Min_Num + 1; i <= Max_Num; i = i + 2)
					cout << i << " ";
			}
		}
	}
}