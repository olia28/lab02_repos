// Lab_02.cpp
// Кліщевська Ольга Русланівна
// Лабораторна робота № 2.
// Лінайні програми.
// Варіант 10
#include <iostream>
#include <cmath>

// 2 commit branch main

using namespace std;

int main()
{
    double Pi = 4 * atan(1.);
    double a;
    double z1;
    double z2;

    cout << "a= "; cin >> a;
    z1 = sin(Pi / 2 + 3 * a) / (1 - sin(3 * a - Pi));
    z2 = 1 / tan((5.0 / 4) * Pi + (3.0 / 2) * a);

    cout << endl;
    cout << "z1= " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}
