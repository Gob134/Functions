#include <iostream>
using namespace std;
#define tab "\t";

double fact(int a)
{
    if (a < 0)
        return 0;
    if (a == 0)
        return 1;
    else
        return a * fact(a - 1);
}

int main()
{
    int a, b;
    setlocale(LC_ALL, "");

    cout << "������� �����: ";
    cin >> a;
    cout << "��������� ����� " << a << " = " << fact(a) << tab;
    return 0;

    cout << "������� �����: "; cin >> a;
    cout << "������� �������: "; cin >> b;
    cout << a << " � ������� " << b << " = " << pow(a, b);
}