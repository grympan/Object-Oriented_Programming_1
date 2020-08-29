#include <iostream>
#include <string>
using namespace std;

void main()
{
	string sentence, from, to;

	cout << "Enter the sentence : ";
	getline(cin, sentence, '\n');
	cout << "From : ";
	getline(cin, from, '\n');
	cout << "To : ";
	getline(cin, to, '\n');

	for (int i = 0; i < sentence.length(); i++)
	{
		int loc = sentence.find(from, i);

		if (string::npos == loc)
			break;

		sentence.replace(loc, from.length(), to);
	}
	cout << "Replaced sentence :\n" << sentence << endl;

}