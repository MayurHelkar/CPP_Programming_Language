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

int main()
{
    int x = 0;          int y = 0;

    cout << "First operation : Increment" << endl;
    cout << "++x : " << ++x << "\t\t";
    cout << "--y : " << --y << endl;
    cout << "Second operation : Assign" << endl;
    cout << "x : " << x << "\t\t";
    cout << "y : " << y << endl;

    printf("\n");

    x = 0;              y = 0;

    cout << "First operation : Assign" << endl;
    cout << "x++ : " << x++ << "\t\t";
    cout << "y-- : " << y-- << endl;
    cout << "Second operation : Increment" << endl;
    cout << "x : " << x << "\t\t";
    cout << "y : " << y << endl;
    
    return 0;
}