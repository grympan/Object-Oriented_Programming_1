#include <iostream>
using namespace std;

void main()
{
	char a = 'A';
	int b = 10;
	double c = 2.6;

	char * ptrA;
	int * ptrB;
	double * ptrC;

	ptrA = &a;
	ptrB = &b;
	ptrC = &c;

	cout << *ptrA << endl;
	cout << *ptrB << endl;
	cout << *ptrC << endl;
}