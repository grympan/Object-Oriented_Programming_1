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
	cin  >> profile->name;

	cout << "JOB : ";
	cin  >> profile->job;

	cout << "TEL : ";
	cin  >> profile->tel;

	cout << "EMAIL : ";
	cin  >> profile->email;
}

void printNameCard(namecard *k)
{
	cout << "\n " << k->name << "\t" << k->job << "\t" << k->tel << "\t" << k->email;
}

void main()
{
	namecard x; getNewNameCard(&x); cout << endl;
	namecard y; getNewNameCard(&y); cout << endl;
	namecard z; getNewNameCard(&z); cout << endl;

	cout << " Name\t Job \t\t Tel \t email";
	cout << "\n ==============================================";
	printNameCard(&x);
	printNameCard(&y);
	printNameCard(&z);
	cout << "\n ==============================================\n";
}