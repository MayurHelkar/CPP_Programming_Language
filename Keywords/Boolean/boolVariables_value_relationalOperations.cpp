using namespace std;

#include <iostream>

int main()
{
    bool currentAge;
    bool voteAge = 18;

    cout << "Enter current Age : ";
    cin >> currentAge;  // Inputs - 17, 18, 19

    cout << endl;
    
    cout << "Values ::" << endl;
    cout << currentAge << endl;
    cout << voteAge << endl;

    cout << endl;
    
    cout << "Address ::" << endl;
    cout << &currentAge << endl;
    cout << &voteAge << endl;

    cout << endl;
    
    cout << "Value sizeof() ::" << endl;
    cout << sizeof(currentAge) << endl;
    cout << sizeof(voteAge) << endl;

    cout << endl;
    
    cout << "Address sizeof() ::" << endl;
    cout << sizeof(&currentAge) << endl;
    cout << sizeof(&voteAge) << endl;

    cout << endl;
    
    cout << "Relational operator : < > <= >= == !=" << endl;
    cout << "currentAge < voteAge : " << (currentAge < voteAge) << endl;
    cout << "currentAge <= voteAge : " << (currentAge <= voteAge) << endl;
    cout << "currentAge > voteAge : " << (currentAge > voteAge) << endl;
    cout << "currentAge >= voteAge : " << (currentAge >= voteAge) << endl;
    cout << "currentAge == voteAge : " << (currentAge == voteAge) << endl;
    cout << "currentAge != voteAge : " << (currentAge != voteAge) << endl;

    return 0;
}