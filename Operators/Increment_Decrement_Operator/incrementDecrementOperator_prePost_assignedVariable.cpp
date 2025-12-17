/*
Program to display Pre and Post Increment and Decrement operator working

Increment and Decrement opertions require 2 steps - Increment/Decrement and Assign

Increment "++" :: 
Pre : ++value, First increment then assign value
Post : value++, First assign then increment

Decrement "--" :: 
Pre : --value, First increment then assign value
Post : value--, First assign then increment
*/

using namespace std;

#include <iostream>

int x = 0;      int y = 0;

int main()
{
    int a = ++x;        int b = --y;
    cout << "First operation : Increment" << endl;
    cout << "Second operation : Assign" << endl;
    cout << "x : " << x << " and y : " << y << "\ta : " << a << " and b : " << b << endl;

    x = 0;              y = 0;
    a = x++;            b = y++;
    cout << "First operation : Assign" << endl;
    cout << "Second operation : Increment" << endl;
    cout << "x : " << x << " and y : " << y << "\t\ta : " << a << " and b : " << b << endl;

    return 0;
}