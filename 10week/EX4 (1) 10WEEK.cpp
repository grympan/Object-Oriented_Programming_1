#include <iostream>
using namespace std;
void main()
{
	int a[5] = {10, 20, 30, 40, 50};

	cout << " a :" << a << "\n";
	cout << " &a[0] :" << &a[0] << "\n";
}

// 데이터 시작 지점 = 주소
// 배열 a의 시작 위치와 a의 0번째 값의 위치는 같다.