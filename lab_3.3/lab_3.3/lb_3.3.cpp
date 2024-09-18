// Lab_03_3.cpp
// < Чухрай Андрій >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 19
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x < 1)
        y = -x;
    else
        if (x>-1 && x<1)
            y = R;
        else
        if (x>=1 && x<=1+2*R)
            y =sqrt(R*R-x+(1+R)*(1 + R));
        else
            if (x>1+2*R)
                 y=-x;
    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}
