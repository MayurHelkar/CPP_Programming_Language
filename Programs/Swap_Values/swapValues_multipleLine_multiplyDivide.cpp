using namespace std;

#include <iostream>

int main()
{
    int a;          int b;

    cout << "Input 2 values ::" << endl;
    cin >> a;                    cin >> b;

    cout << endl;
    
    cout << "Before Swapping ::" << endl;
    cout << "a : " << a;         cout << "\t\tb : " << b;
    
    cout << endl << endl;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    cout << "After Swapping ::" << endl;
    cout << "a : " << a;          cout << "\t\tb : " << b;
    
    return 0;
}