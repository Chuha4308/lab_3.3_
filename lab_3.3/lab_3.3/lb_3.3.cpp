// Lab_03_3.cpp
// < ������ ����� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 19
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // ������� ��������
    double R; // ������� ��������
    double y; // ��������� ���������� ������
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // ������������ � ����� ����
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
