using namespace std;

#include <iostream>

int main()
{
    int a = 5;
    int b = 9; 
    int c;

/*
    scanf("%d", &a);
    scanf("%d", &b);
*/

    cout << "When a = " << a << ", b = " << b << " ::" << endl;
    c = a < b;      cout << "a < b : " << c << endl;
    c = a > b;      cout << "a > b : " << c << endl;
    c = a <= b;     cout << "a <= b : " << c << endl;
    c = a >= b;     cout << "a >= b : " << c << endl;
    c = a == b;     cout << "a == b : " << c << endl;
    c = a != b;     cout << "a != b : " << c << endl;

    cout << endl;

    a = b = 10;
    cout << "When a = " << a << ", b = " << b << " ::" << endl;
    c = a < b;      cout << "a < b : " << c << endl;
    c = a > b;      cout << "a > b : " << c << endl;
    c = a <= b;     cout << "a <= b : " << c << endl;
    c = a >= b;     cout << "a >= b : " << c << endl;
    c = a == b;     cout << "a == b : " << c << endl;
    c = a != b;     cout << "a != b : " << c << endl;

    cout << endl;

    a = 7, b = 4;
    cout << "When a = " << a << ", b = " << b << " ::" << endl;
    c = a < b;      cout << "a < b : " << c << endl;
    c = a > b;      cout << "a > b : " << c << endl;
    c = a <= b;     cout << "a <= b : " << c << endl;
    c = a >= b;     cout << "a >= b : " << c << endl;
    c = a == b;     cout << "a == b : " << c << endl;
    c = a != b;     cout << "a != b : " << c << endl;

    return 0;
}