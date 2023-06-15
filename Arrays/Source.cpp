#include <iostream>
using namespace std;
#define tab "\t";

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 3;
	double arr[SIZE] = { 5,8,9 };
	double matrix_one[SIZE][SIZE] = {};
	double matrix_two[SIZE][SIZE] = {};
	double matrix_res[SIZE][SIZE] = {};

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			matrix_one[i][j] = rand() % 10;
			cout << matrix_one[i][j] << tab;
		}
		cout << endl;
	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			matrix_two[i][j] = rand() % 10;
			cout << matrix_two[i][j] << tab;
		}
		cout << endl;
	}

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			double res = 0;
			for (int k = 0; k < SIZE; k++)
			{
				res += matrix_one[i][k] * matrix_two[i][k];
			}
			matrix_res[i][j] += res;
		}
		cout << endl;
	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << matrix_res[i][j] << tab;
		}
		cout << endl;
	}
}