#include <iostream>
using namespace std;
int main()
{
	int aa[] = {10, 20, 30, 40, 50};
	int count;

	count = sizeof(aa) / sizeof(int);

	cout << "�迭 aa[]�� ����� ������ " << count << " �Դϴ�.\n";
}