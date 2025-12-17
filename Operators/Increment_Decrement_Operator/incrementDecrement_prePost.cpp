using namespace std;

#include <iostream>

int x = 0;      int y = 0;

int main()
{
    int a = ++x;        int b = --y;

    cout << "x : " << x << " and y : " << y << "\ta : " << a << " and b : " << b << endl;

    x = 0;              y = 0;
    a = x++;            b = y++;
    cout << "x : " << x << " and y : " << y << "\t\ta : " << a << " and b : " << b << endl;

    return 0;
}