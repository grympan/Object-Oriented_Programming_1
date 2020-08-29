#include <iostream>
using namespace std;
struct namecard{
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

void main()
{
	namecard x = {"Rhee", "Professor", "418-9876", "chae.rhee@inha.ac.kr"};
	namecard y = {"Jang", "TA", "551-6986", "jang@inha.ac.kr"};
	namecard z = {"Kim", "Stdent", "318-3961", "ds@naver.com"};

	cout << "Name\t Job \t\t Tel \t email";
	cout << "\n ==================================================================";
	cout << "\n " << x.name << "\t" << x.job << "\t" << x.tel << "\t" << x.email;
	cout << "\n " << y.name << "\t" << y.job << "\t" << y.tel << "\t" << y.email;
	cout << "\n " << z.name << "\t" << z.job << "\t" << z.tel << "\t" << z.email;
	cout << "\n ==================================================================";
}