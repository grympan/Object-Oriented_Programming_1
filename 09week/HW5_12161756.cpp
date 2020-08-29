#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	int frequency[6] = {0};
	int face = 0;

	for (unsigned int roll = 1; roll <= 6000000; ++roll)
	{
		face = (1 + rand() % 6);
		frequency[face-1]++;
	}

	cout <<  "Face" << setw(12) << "Frequency" << endl;
	for (int i = 0; i < 6; i++)
		cout << "   " << i+1 << setw(12) << frequency[i] << endl;
}