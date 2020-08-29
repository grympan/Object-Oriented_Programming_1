#include <iostream>
using namespace std;
int main()
{
	int aa[] = {10, 20, 30, 40, 50};
	int count;

	count = sizeof(aa) / sizeof(int);

	cout << "배열 aa[]의 요소의 개수는 " << count << " 입니다.\n";
}