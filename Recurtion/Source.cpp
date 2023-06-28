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

int fib(int a)
{
    if (a <= 1)
        return a;
    return fib(a - 1) + fib(a - 2);
}

int main()
{
    int a, b;
    setlocale(LC_ALL, "");

    cout << "Введите число для вычисления факториала: ";
    cin >> a;
    cout << "Факториал числа " << a << " = " << fact(a) << endl;

    cout << "Введите число: "; cin >> a;
    cout << "Введите степень: "; cin >> b;
    cout << a << " в степени " << b << " = " << pow(a, b);

    cout << "Колличество чисел Фиббоначи = "; cin >> a;
    cout << fib(a);
}