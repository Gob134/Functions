#include <iostream>
using namespace std;
#define tab "\t";

long double fact(int a)
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
    int a;
    setlocale(LC_ALL, "");
    cout << "������� �����: ";
    cin >> a;
    cout << "��������� ��� ����� " << a << " = " << fact(a) << tab;
    return 0;
}
