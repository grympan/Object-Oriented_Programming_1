#include <iostream>
#include <cmath>
using namespace std;

double sphereVolume(double a);

int main()
{
	double radiusValue = 0;

	cout << "Enter the length of the radius of your sphere : ";
	cin  >> radiusValue;
	cout << "Volume of sphere with radius " << radiusValue << " is " << sphereVolume(radiusValue) << endl;
}

double sphereVolume(double num)
{
	double PI = 3.141592;
	double R3 = pow(num, 3);
	
	return 4.0 / 3.0 * PI * R3;
}