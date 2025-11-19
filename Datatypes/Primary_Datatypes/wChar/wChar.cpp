using namespace std;

#include <iostream>

int main()
{
    auto wChar = L'xy';
    cout << "sizeof(wChar) : " << sizeof(wChar) << " and typeid(wChar).name() : " << typeid(wChar).name() << endl;
    cout << "wChar : " << wChar << " and &wChar : " << endl;

    return 0;
}