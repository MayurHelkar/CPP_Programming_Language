using namespace std;

#include <iostream>

int main()
{
    bool b, b1 = true, b2 = false;

    cout << "bool Size : " << sizeof(bool) << endl;

    cout << endl;

    cout << "b : " << b << " and &b : " << &b <<endl;
    cout << "b1 : " << b1 << " and &b1 : " << &b1 <<endl;
    cout << "b2 : " << b2 << " and &b2 : " << &b2 <<endl;

    cout << endl;

    bool g = false + 20 * 4 % 2;    cout << "g : " << g << endl;
    bool h = true + 6543 - 7542;    cout << "h : " << h << endl;

    cout << endl;

    bool *boolPtr;  boolPtr = &b;
    cout << "*boolPtr : " << *boolPtr << ", boolPtr : " << boolPtr << " and " << boolPtr << endl;

    return 0;
}