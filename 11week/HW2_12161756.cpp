#include <iostream>;
#include <string>;
using namespace std;

void main()
{
	char sent[50];
	cout << "바꿀 영문을 입력하시오. (대문자 <-> 소문자)\n";
	gets_s(sent);
	int len;
	len = strlen(sent);

	for (int i = 0; i < len; i++)
	{
		if(sent[i] == 32)
			continue;

		else if(sent[i] >= 97)
			sent[i] = sent[i] - 32;

		else if(sent[i] < 97)
			sent[i] = sent[i] + 32;
	}
	
	for (int i = 0; i < len; i++)
		cout << sent[i];

	cout << endl;
}