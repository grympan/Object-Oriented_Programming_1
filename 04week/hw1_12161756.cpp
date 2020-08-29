#include <iostream>
	using namespace std;
void main()
{
	int MENU;
	int KINDOFFOOD;
	int DRINK;
	int FOOD;

		cout << "Select a menu.\n";
		cout << "1.food 2.drink\n";
		cin  >> MENU;

			if(MENU==1)
			{
				cout << "You have selected food. Which food?\n";
				cout << "1.Korean 2.American 3.Chinese\n";
				cin  >> KINDOFFOOD;

				if(KINDOFFOOD==1)
				{
					cout << "You have selected a Korean food.\n";
					cout << "Which Korean food?\n";
					cout << "1.Rice 2.Bulgogi\n";
					cin  >> FOOD;

					if(FOOD==1)
						cout << "Enjoy your rice!\n";
					else
						cout << "Enjoy your bulgogi!\n";
				}

				else if(KINDOFFOOD==2)
				{
					cout << "You have selected an American food.\n";
					cout << "Which American food?\n";
					cout << "1.Hamburger 2.Salad\n";
					cin  >> FOOD;

					if(FOOD==1)
						cout << "Enjoy your hamburger!\n";
					else
						cout << "Enjoy your salad!\n";
				}

				else
				{
					cout << "You have selected a Chinese food.\n";
					cout << "Which Chinese food?\n";
					cout << "1.Noodle 2.Dimsum\n";
					cin  >> FOOD;

					if(FOOD==1)
						cout << "Enjoy your noodle!\n";
					else
						cout << "Enjoy your dimsum!\n";
				}
			}

			else
			{
				cout << "You have selected drink. Which drink?\n";
				cout << "1.Cola 2.Orange juice 3.Water\n";
				cin  >> DRINK;

					if(DRINK==1)
						cout << "Enjoy your Cola!\n";
					else if(DRINK==2)
						cout << "Enjoy your Orange juice!\n";
					else
						cout << "Enjoy your Water!\n";
			}
}