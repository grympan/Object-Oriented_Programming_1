#include <iostream>
using namespace std;

void show_array(int a[])
{
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";

	cout <<endl;
}

int main()
{
	int menu;
	int array[10];
	int x, y;

	for(;;)
	{
		cout << endl << "[0.quit / 1.read / 2.show / 3.rev-show / 4. replace all / 5. find first location / 6. find all locations]\n";
		cout << "enter menu number\n";
		cin >> menu;

		if(menu == 0)
			break;

		else if(menu == 1)
		{
			cout << "Enter 10 numbers\n";
			for(int i = 0; i < 10; i++)
				cin >> array[i];
		}

		else if(menu == 2)
		{
			cout << "The current array is\n";
			show_array(array);
		}

		else if(menu == 3)
		{
			cout << "The REV-array is\n";
			for (int j = 9; j >= 0; j--)
				cout << array[j] << " ";
			cout << endl;
		}

		else if(menu == 4)
		{
			cout << "Enter two numbers x, y. The system will replace all \"x\" with \"y\""<<endl;
			cin >> x >> y;

			for (int i = 0; i < 10; i++)
				if (array[i] == x)
					array[i] = y;

			show_array(array);
		}

		else if (menu == 5)
		{
			cout << "Enter a number. The system will find the first location of this number.\n";
			cin >> x;

			for (int i = 0; i < 10; i++)
				if (array[i] == x)
				{
					cout << "The first location of " << x << " is " << i << endl;
					break;
				}
		}

		else if (menu == 6)
		{
			cout << "Enter a number. The system will find all the locations of this number.\n";
			cin >> x;
			cout << "All the locations of " << x << " are ";

			for (int i = 0; i < 10; i++)
				if (array[i] == x)
					cout << i << " ";

			cout << endl;
		}
	}
}