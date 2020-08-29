#include <iostream>
using namespace std;

int coffee_machine(int a);

int main()
{
	int coffee;
	
	for(;;)
	{
	cout << "어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙) : ";
	cin  >> coffee;
	coffee_machine(coffee);
	cout << "손님~ 커피 여기 있습니다.\n\n" << endl;
	}
}

int coffee_machine(int num)
{
	cout << "\n# 1. (자동으로) 뜨거운 물을 준비한다\n";
	cout << "# 2. (자동으로) 종이컵을 준비한다\n";

	switch(num)
	{
	case 1 : cout << "# 3. (자동으로) 보통커피를 탄다" << endl; break;
	case 2 : cout << "# 3. (자동으로) 설탕커피를 탄다" << endl; break;
	case 3 : cout << "# 3. (자동으로) 블랙커피를 탄다" << endl; break;
	default : cout<< "# 3. (자동으로) 아무거나 탄다"   << endl; break;
	}

	cout << "# 4. (자동으로) 물을 붓는다" << endl;
	cout << "# 5. (자동으로) 스푼으로 저어서 녹인다\n" <<endl;
	return 0;
}