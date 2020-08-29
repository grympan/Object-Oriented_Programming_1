#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)


	else{
		for (int i = 1; i < argc; i++)
			sum += atoi(argv[i]);

		cout << "Sum = " << sum << endl;
	}

	return 0;
}