#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

void main()
{
	int array[20][20];
	int menu, row, col, total, max, max_row, max_col;

	for (;;)
	{
		cout << "\n[1.fill  2.show  3.row_sum  4.col_sum  5.diagonal_sum]\n";
		cout << "[6.backward_diagonal_sum  7.row_max  8.col_max  9.max_row  10.max_col]\n";
		cout << "Enter menu number : ";
		cin >> menu;

		if (menu == 1)
		{
			srand(time(NULL));
			for (int i = 0; i < 20; i++)
				for (int j = 0; j < 20; j++)
					array[i][j] = rand() % 100;
		}

		else if (menu == 2)
		{
			for (int i = 0; i < 20; i++)
			{
				for (int j = 0; j < 20; j++)
					cout << setw(3) << array[i][j] << " ";

				cout << endl;
			}
		}

		else if (menu == 3)
		{
			total = 0;
			cout << "Enter the row number : ";
			cin >> row;

			for (int j = 0; j < 20; j++)
				total += array[row][j];

			cout << "The sum of " << row << " row is " << total << endl;
		}

		else if (menu == 4)
		{
			total = 0;
			cout << "Enter the col number : ";
			cin >> col;

			for (int i = 0; i < 20; i++)
				total += array[i][col];

			cout << "The sum of " << col << " col is " << total << endl;
		}

		else if (menu == 5)
		{
			total = 0;
			for (int i = 0; i < 20; i++)
				total += array[i][i];

			cout << "The diagonal sum is " << total << endl;
		}

		else if (menu == 6)
		{
			total = 0;
			for (int i = 0; i < 20; i++)
				total += array[i][19 - i];

			cout << "The backward diagonal sum is " << total << endl;
		}

		else if (menu == 7)
		{
			cout << "Enter the row number : ";
			cin >> row;

			max = array[row][0];
			for (int j = 1; j < 20; j++)
				if (array[row][j] >= max)
					max = array[row][j];

			cout << "The row max is " << max << endl;
		}

		else if (menu == 8)
		{
			cout << "Enter the col number(1 ~ 20) : ";
			cin >> col;

			max = array[0][col];
			for (int i = 1; i < 20; i++)
				if (array[i][col] >= max)
					max = array[i][col];

			cout << "The col max is " << max << endl;
		}

		else if (menu == 9)
		{
			max = 0;
			for (int j = 0; j < 20; j++)
				max += array[0][j];

			for (int i = 1; i < 20; i++)
			{
				total = 0;
				for (int j = 0; j < 20; j++)
					total += array[i][j];

				if (total >= max)
				{
					max = total;
					max_row = i;
				}
			}

			cout << "The max row is" << endl;
			cout << " [";
			for (int jj = 0; jj < 20; jj++)
				cout << " " << array[max_row][jj];
			cout << " ]\n";
		}

		else if (menu == 10)
		{
			max = 0;
			for (int i = 0; i < 20; i++)
				max += array[i][0];

			for (int j = 1; j < 20; j++)
			{
				total = 0;
				for (int i = 0; i < 20; i++)
					total += array[i][j];

				if (total >= max)
				{
					max = total;
					max_col = j;
				}
			}

			cout << "The max col is" << endl;
			cout << " คว\n";
			for (int ii = 0; ii < 20; ii++)
				cout << " " << setw(2) << array[ii][max_col] << endl;
			cout << " คฬ" << endl;
		}
	}
}