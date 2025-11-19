#include <iostream>

using namespace std;

int main()
{
    int x = 10;     int &y = x;

    cout << "x : " << x << " and y : " << &x << endl;
    cout << "&x : " << x << " and &y : " << &y << endl;

    cout << endl;

    int arr[10];    int &ptr = arr[10];

    cout << "*arr : " << *arr << " and " << "ptr : " << ptr << endl;
    cout << "&arr : " << &arr << " and " << "&ptr : " << &ptr << endl;

//    cout << "arr : " << arr[0] << " and " << "ptr[0] : " << ptr[0] << endl;
    cout << endl;

    int &p = *arr;

    cout << "*arr : " << *arr << " and " << "p : " << p << endl;
    cout << "arr : " << arr << " and " << "&p : " << &p << endl;
//    cout << "&arr : " << &arr << " and " << "&&p : " << &&p << endl;    // error: label 'p' used but not defined
    cout << "&arr : " << &arr << endl;
//    cout << "arr[0] : " << arr[0] << " and " << "p[0] : " << p[0] << endl; // error: invalid types 'int[int]' for array subscript
    cout << "arr[i] : " << arr[0] << " and " << "p : " << p << endl;

    return 0;
}