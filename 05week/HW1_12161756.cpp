#include <iostream>
using namespace std;
void main()
{
	int BN, EN, IN;
	cout << "Input Begin number, End number, Increase number : ";
	cin  >> BN >> EN >> IN;

	int result = 0;
	for (int i = BN; i <= EN; i = i+IN)
	{
		result = result + i;
	}

	cout << "An increase in the sum by " << IN << " from " << BN << " to " << EN << " : " << result <<endl;
}