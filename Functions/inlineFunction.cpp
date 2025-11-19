#include <iostream>

using namespace std;

inline int squareFunction(int &a)
{
    cout << "a : " << a << " and &a : " << &a << endl;

    return a * a;    
}

inline int cubeFunction(int *b)
{
    cout << "*b : " << *b << ", b : " << b << " and &b : " << &b << endl;

    return *b * *b * *b;
}

int main()
{
    int e = 11;

    int f = 9;

    cout << "squareFunction(e) : " << squareFunction(e) << endl;

    cout << "cubeFunction(&f) : " << cubeFunction(&f) << endl;

    return 0;
}