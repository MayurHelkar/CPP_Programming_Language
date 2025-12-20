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

    cout << "Logical operator && || !" << endl;
    cout << "currentAge && voteAge : " << (currentAge && voteAge) << endl;
    cout << "currentAge || voteAge : " << (currentAge || voteAge) << endl;
    cout << "!currentAge : " << (!currentAge) << endl;
    cout << "!voteAge : " << (!voteAge) << endl;

    cout << endl;

    cout << "Logical operator && || !" << endl;
    cout << "currentAge && voteAge : " << (currentAge and voteAge) << endl;
    cout << "currentAge || voteAge : " << (currentAge or voteAge) << endl;
    cout << "not currentAge : " << (not currentAge) << endl;
    cout << "not voteAge : " << (not voteAge) << endl;

    return 0;
}