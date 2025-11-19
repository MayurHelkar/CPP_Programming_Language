#include <iostream>

using namespace std;

void swap_callByReference(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
    cout << "a : " << a << " and &a : " << &a << endl;
    cout << "b : " << b << " and &b : " << &b << endl;

    return;
}

int main()
{
    int c = 12, d = 54;

    cout << "Before Swapping c and d :" << endl;
    cout << "c : " << c << " and &c : " << &c << endl;
    cout << "d : " << d << " and &d : " << &d << endl;

    cout << endl;

    swap(c, d);
    cout << "After Swapping c and d :" << endl;
    cout << "c : " << c << " and &c : " << &c << endl;
    cout << "d : " << d << " and &d : " << &d << endl;

    return 0;
}