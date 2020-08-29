#include <iostream>
using namespace std;

struct namecard
{
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

void getNewNameCard(namecard *profile)
{
	cout << "NAME : ";
	cin >> profile->name;

	cout << "JOB : ";
	cin >> profile->job;

	cout << "TEL : ";
	cin >> profile->tel;

	cout << "EMAIL : ";
	cin >> profile->email;
}

void printNameCard(namecard *k)
{
	cout << "\n " << k->name << "\t" << k->job << "\t" << k->tel << "\t" << k->email;
}

void main()
{
	namecard x;
	x = new namecard;
	namecard y;
	y = new namecard;
	namecard z;
	z = new namecard;
	
	getNewNameCard(x); cout << endl;
	getNewNameCard(y); cout << endl;
	getNewNameCard(z); cout << endl;

	cout << " Name\t Job \t\t Tel \t email";
	cout << "\n ==============================================";
	printNameCard(x);
	printNameCard(y);
	printNameCard(z);
	cout << "\n ==============================================\n";

	delete x; x = NULL;
	delete y; y = NULL;
	delete z; z = NULL;
}