#include <iostream>
using namespace std;

int FindMaxNumber(int box_name[], int number_of_box)
{
	int max = box_name[0];
	int max_loc = 0;

	for(int i = 1; i < number_of_box; i++)
		if (box_name[i] >= max)
		{
			max = box_name[i];
			max_loc = i;
		}
	return max_loc;
}

void main()
{
	int grade[10] = {90, 88, 85, 55, 47, 92, 87, 30, 89, 55};
	int maxGradeIndex = 0;

	maxGradeIndex = FindMaxNumber(grade, 10);

	cout << "Best grade = " << grade[maxGradeIndex] << '\n';
}