using namespace std;

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c;

/*
    scanf("%d", &a);
    scanf("%d", &b);
*/

    cout << "When a = " << a << " and b : " << b << endl;
    c = a && b;     cout << "a && b : " << c << endl;
    c = a || b;     cout << "a || b : " << c << endl;

    cout << endl;

    a = 0, b = 1;
    cout << "When a = " << a << " and b : " << b << endl;
    c = a && b;     cout << "a && b : " << c << endl;
    c = a || b;     cout << "a || b : " << c << endl;  

    cout << endl;

    a = 1, b = 0;
    cout << "When a = " << a << " and b : " << b << endl;
    c = a && b;     cout << "a && b : " << c << endl;
    c = a || b;     cout << "a || b : " << c << endl;

    cout << endl;

    a = 1, b = 1;
    cout << "When a = " << a << " and b : " << b << endl;
    c = a && b;     cout << "a && b : " << c << endl;
    c = a || b;     cout << "a || b : " << c << endl;

    cout << endl;

    a = 0, b = 0;
    cout << "When a = " << a << " and b : " << b << endl;
    cout << "!a : " << !a << " and !b : " << !b << endl;

    cout << endl;

    a = 1, b = 1;
    cout << "When a = " << a << " and b : " << b << endl;
    cout << "!a : " << !a << " and !b : " << !b << endl;

    return 0;
}