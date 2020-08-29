#include <iostream>
using namespace std;

int FindMaxNumber(int* argGrade)
{
	int max = argGrade[0];
	int index = 0;

	for(int i = 1; i < 10; i++)
		if(argGrade[i] >= max){
			max = argGrade[i];
			index = i;
		}

	return index;
}

void main(){
	int grade[10] = {90, 88, 85, 55, 47, 92, 87, 30, 89, 55};
	int maxGradeIndex = 0;

	maxGradeIndex = FindMaxNumber(grade);

	cout << "Best grade = " << grade[maxGradeIndex] << '\n';
	cout << "StudentID = " << maxGradeIndex + 1 << '\n';
}