#include<iostream>
#include<conio.h>
using namespace std;

#define tab "\t"
#define VO  "\n\n\n\n\n"
#define HO  "\t\t\t\t\t"

void PrintField(char field[], const int n, char player);
void Move(char field[], const int n, char payer);
void Check(char field[], const int n, char player);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 9;
	char field[n] = {};
	PrintField(field, n, 'X');
}


void PrintField(char field[], const int n, char player)
{
	system("CLS");
	cout << VO;
	for (int i = 6; i >= 0; i -= 3)
	{
		cout << HO;
		cout << " ";
		for (int j = 0; j < 3; j++)
		{
			cout << field[i + j];
			if (j < 2)
				cout << " | ";
		}
		cout << endl;
		cout << HO;
		if (i > 0)
			cout << "--- --- ---";
		cout << endl;
	}
	Move(field, n, player);
}

void Move(char field[], const int n, char player)
{
	char key;
	do
	{
		key = _getch();
		if (key == 27) return;
		if (key < '1' || key > '9')
			cout << "Выход за пределы" << endl;
		else if (field[key - 49] != 0)
			cout << "Клетка занята" << endl;
	} while (key < '1' || key > '9' || key[field - 49] != 0);
	field[key - 49] = player;
	PrintField(field, n, player == 'X' ? '0' : 'X');
}