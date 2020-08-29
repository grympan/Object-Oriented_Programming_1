#include <iostream>
#include <string>
using namespace std;
int main(){
	char ss[100];
	char tt[100];
	int count, i;

	cout << "enter the sentence : ";
	gets_s(ss, 100);

	count = strlen(ss);
	
	for(i = 0; i < count; i++)
		tt[i] = ss[count - (i + 1)];

	tt[count] = '\0';
	cout << "reversed sentence : ";
	puts(tt);
}