#include <iostream>
using namespace std;
void main()
{
	int a, b, c;

	cout << "���� �� ���� �Է��ϼ���.\n";
	cin  >> a;
	cin  >> b;
	cin  >> c;
	cout << "���ڰ� ū ������ ���ĵǾ����ϴ�.\n";

	if (a >= b && b >= c)
		cout << a << " " << b << " " << c << endl;

	else if (a >= c && c >= b)
		cout << a << " " << c << " " << b << endl;

	else if (b >= a && a >= c)
		cout << b << " " << a << " " << c << endl;

	else if (b >= c && c >= a)
		cout << b << " " << c << " " << a << endl;

	else if (c >= a && a >= b)
		cout << c << " " << a << " " << b << endl;

	else
		cout << c << " " << b << " " << a << endl;
}