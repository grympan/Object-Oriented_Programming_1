#include <iostream>
using namespace std;
void main()
{
	int   num1, num2;
	char  sign;
	float result1;
	int   result2;

	cout << "ù ��° ���� �Է��ϼ��� : ";
	cin  >> num1;
	cout << "����� �����ڸ� �Է��ϼ��� : ";
	cin  >> sign;
	cout << "�� ��° ���� �Է��ϼ��� : ";
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
		cout << "�����ڸ� �߸� �Է��߽��ϴ�.\n";
}