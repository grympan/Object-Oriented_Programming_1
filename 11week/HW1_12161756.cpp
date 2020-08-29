#include <iostream>
#include <string>
using namespace std;

struct namecard
{
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

namecard getNewNameCard()
{
	namecard profile;

	cout << "NAME : ";
	cin >> profile.name;

	cout << "JOB : ";
	cin >> profile.job;
	
	cout << "TEL : ";
	cin >> profile.tel;

	cout << "EMAIL : ";
	cin >> profile.email;

	return profile;
}

namecard printNameCard(namecard k)
{
	cout << "\n " << k.name << "\t" << k.job << "\t" << k.tel << "\t" << k.email;
	return k;
}

void main()
{
	namecard x = getNewNameCard(); cout << endl;
	namecard y = getNewNameCard(); cout << endl;
	namecard z = getNewNameCard(); cout << endl;

	cout << " Name\t Job \t\t Tel \t email";
	cout << "\n =====================================================";
	printNameCard(x);
	printNameCard(y);
	printNameCard(z);
	cout << "\n =====================================================\n";
}