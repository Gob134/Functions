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

int pow(int a, int b)
{
    if (b == 0) return 1;
    else if (b > 0) return a * pow(a, b - 1);
    else if (b < 0) return 1 / (a * pow(a, b - 1));
}

int main()
{
    int a, b;
    setlocale(LC_ALL, "");

    cout << "������� �����: "; cin >> a;
    cout << "������� �������: "; cin >> b;
    cout << a << " � ������� " << b << " = " << pow(a, b);
}