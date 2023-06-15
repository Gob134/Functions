#include<iostream>
using namespace std;
#define tab "\t"

//#define minus
//#define umnozh

#define minus

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 3;
	double arr[SIZE] = { 5,8,9 };
	double matrix_one[SIZE][SIZE] = {};
	double matrix_two[SIZE][SIZE] = {};
	double matrix_result[SIZE][SIZE] = {};

#ifdef plus

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
			matrix_result[i][j] += matrix_one[i][j] + matrix_two[i][j];
		}
		cout << endl;
	}
#endif

#ifdef minus

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
			matrix_result[i][j] += matrix_one[i][j] - matrix_two[i][j];
		}
		cout << endl;
	}
#endif

#ifdef umnozh

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
			double result = 0;
			for (int k = 0; k < SIZE; k++)
			{
				result += matrix_one[i][k] * matrix_two[i][k];
			}
			matrix_result[i][j] += result;
		}
		cout << endl;
	}

#endif
}