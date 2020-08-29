#include <iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

float divi(int x, float y)
{
	return x / y;
}

int mod(int x, int y)
{
	return x % y;
}

void main(){
	int sel, x, y;
	for (;;){
		cout << "\nenter two numbers" << endl;
		cin  >> x >> y;
		cout << "1. add  2. sub  3. mul  4. div  5. mod  6. quit" << endl;
		cout << "select operation" << endl;
		cin  >> sel;

		if (sel == 1)             cout << add(x, y) << endl;
		else if (sel == 2)        cout << sub(x, y) << endl;
		else if (sel == 3)        cout << mul(x, y) << endl;
		else if (sel == 4)
		{
			if (y == 0)           cout << 0 << endl;
			else                  cout << divi(x, (float)y) << endl;
		}
		else if (sel == 5)
		{
			if (y == 0)           cout << 0 << endl;
			else                  cout << mod(x, y) << endl;
		}
		else {
			cout << "Bye" << endl;
			break;
		}
	}
}