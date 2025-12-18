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
    
//    a ^= b ^= a ^ b;  // value of a is not determined, 0 is showned
//    (a ^= b), (b ^= a), (a ^= b);
    a = a ^ b ^ (b = a);

    
    cout << "After Swapping ::" << endl;
    cout << "a : " << a;          cout << "\t\tb : " << b;
    
    return 0;
}