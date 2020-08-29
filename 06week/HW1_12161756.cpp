#include <iostream>
using namespace std;

int get_integer(void)
{
	int a;
	cout << "정수 하나를 입력하시오.\n";
	cin >> a;
	return a;
}

int factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
		result = result * i;
	return result;
}

int main(void)
{
	int a;

	a = get_integer();

	cout << "factorial of " << a << " is " << factorial(a) << endl;
	return 0;
}