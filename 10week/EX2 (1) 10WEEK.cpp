#include <iostream>
using namespace std;

void swap_num(int a, int b);
void main()
{
	int a = 10, b = 20;
	cout << " a => " << a << " b => " << b << "\n";
	swap_num(a, b);
	cout << " a => " << a << " b => " << b << "\n";
}

void swap_num(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

// ���������̰� return ���� ���⿡ �׳� �Լ� ���� �ȿ����� ��ȿ.