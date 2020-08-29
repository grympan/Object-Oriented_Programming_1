#include <iostream>
#include <string>
using namespace std;

int len(char* s){
	int i = 0;
	int length_string = 0;

	while(s[i] != NULL){
		length_string++;
		i++;}
	
	return length_string;
}

int main(){
	char string[100];

	cout << "enter : ";
	gets_s(string);
	cout << len(string) << endl;
}