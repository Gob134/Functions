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

 //Факториал

    cout << "Введите число: ";
    cin >> a;
    cout << "Факториал для числа " << a << " = " << fact(a) << tab;
    return 0;

//Степень

    cout << "Введите число: "; cin >> a;
    cout << "Введите степень: "; cin >> b;
    cout << a << " в степени " << b << " = " << pow(a, b);
}
