#include <iostream>
using namespace std;
void main()
{
	int   num1, num2;
	char  sign;
	float result1;
	int   result2;

	cout << "첫 번째 수를 입력하세요 : ";
	cin  >> num1;
	cout << "계산할 연산자를 입력하세요 : ";
	cin  >> sign;
	cout << "두 번째 수를 입력하세요 : ";
	cin  >> num2;

	if (sign == '/')
	{
		result1 = num1 / (float)num2;
		cout << num1 << " " << sign << " " << num2 << " = " << result1 << endl;
	}

	else if (sign == '+')
	{
		result2 = num1 + num2;
		cout << num1 << " " << sign << " " << num2 << " = " << result2 << endl;
	}

	else if (sign == '-')
	{
		result2 = num1 - num2;
		cout << num1 << " " << sign << " " << num2 << " = " << result2 << endl;
	}

	else if (sign == '*')
	{
		result2 = num1 * num2;
		cout << num1 << " " << sign << " " << num2 << " = " << result2 << endl;
	}

	else if (sign == '%')
	{
		cout << num1 << " " << sign << " " << num2 << " = " << num1 % num2 << endl;
	}

	else
		cout << "연산자를 잘못 입력했습니다.\n";
}