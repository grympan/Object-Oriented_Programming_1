#include <iostream>
using namespace std;

int coffee_machine(int a);

int main()
{
	int coffee;
	
	for(;;)
	{
	cout << "� Ŀ�� �帱���? (1:����, 2:����, 3:��) : ";
	cin  >> coffee;
	coffee_machine(coffee);
	cout << "�մ�~ Ŀ�� ���� �ֽ��ϴ�.\n\n" << endl;
	}
}

int coffee_machine(int num)
{
	cout << "\n# 1. (�ڵ�����) �߰ſ� ���� �غ��Ѵ�\n";
	cout << "# 2. (�ڵ�����) �������� �غ��Ѵ�\n";

	switch(num)
	{
	case 1 : cout << "# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��" << endl; break;
	case 2 : cout << "# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��" << endl; break;
	case 3 : cout << "# 3. (�ڵ�����) ��Ŀ�Ǹ� ź��" << endl; break;
	default : cout<< "# 3. (�ڵ�����) �ƹ��ų� ź��"   << endl; break;
	}

	cout << "# 4. (�ڵ�����) ���� �״´�" << endl;
	cout << "# 5. (�ڵ�����) ��Ǭ���� ��� ���δ�\n" <<endl;
	return 0;
}