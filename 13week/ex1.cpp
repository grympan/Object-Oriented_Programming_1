#include <iostream>
using namespace std;

void swap1 (int left, int right)
{
	int temp = left;
	left = right;
	right = temp;
}

void swap2 (int *p_left, int *p_right)
{
	int temp = *p_left;
	*p_left = *p_right;
	*p_right = temp;
}

void swap3(int &r_left, int &r_right)
{
	int temp = r_left;
	r_left = r_right;
	r_right = temp;
}

int main()
{
	int x = 1, y = 2;
	swap1(x, y);
	cout << x << " " << y << '\n';
	swap2(&x, &y);
	cout << x << " " << y << '\n';
	swap3(x,y);
	cout << x << " " << y << '\n';
}