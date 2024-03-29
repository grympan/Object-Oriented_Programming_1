#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int findSmallestRemainingElement (
	int array[], int size, int index);
void swap (int array[], int first_index, int second_index);

void sort (int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int index = findSmallestRemainingElement(array, size,i);
		swap(array, i, index);
	}
}

int findSmallestRemainingElement (int array[], int size, int index)
{
	int index_of_smallest_value = index;
	for (int i = index + 1; i < size; i++)
	{
		if (array[i] < array[index_of_smallest_value])
		{
			index_of_smallest_value = i;
		}
	}
	return index_of_smallest_value;
}

void swap (int array[], int first_index, int second_index)
{
	int temp = array[first_index];
	array[first_index] = array[second_index];
	array[second_index] = temp;
}

void displayArray (int array[], int size)
{
	cout << "{";
	for (int i = 0; i < size; i++)
	{
		if (i != 0)
			cout << ", ";
		cout << array[i];
	}
	cout << "}";
}

int main()
{
	int array[10];
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 100;
	}

	cout << "Original array: ";
	displayArray(array, 10);
	cout << '\n';

	sort(array, 10);

	cout << "Sorted array: ";
	displayArray(array, 10);
	cout << '\n';
	}

// 주소만 넘겨줌, displayArray --> 주소를 나타냄
// main 함수에서 처음 displayArray는 swap 되기 전에 한번
// swap 이후 두 번을 가져온다. 따라서 swap이 되는 것.