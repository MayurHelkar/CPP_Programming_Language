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
    cout << "currentAge & voteAge : " << (currentAge & voteAge) << endl;
    currentAge = 0;
    cout << "currentAge &= voteAge : " << (currentAge &= voteAge) << endl;
    currentAge = 0;
    cout << "currentAge | voteAge : " << (currentAge | voteAge) << endl;
    currentAge = 0;
    cout << "currentAge |= voteAge : " << (currentAge |= voteAge) << endl;
    currentAge = 0;
    cout << "currentAge ^ voteAge : " << (currentAge ^ voteAge) << endl;
    currentAge = 0;
    cout << "currentAge ^= voteAge : " << (currentAge ^= voteAge) << endl;
    currentAge = 0;
    cout << "!currentAge : " << (!currentAge) << endl;
    voteAge = 0;
    cout << "!voteAge : " << (!voteAge) << endl;

    cout << endl;

    cout << "Logical operator && || !" << endl;
    cout << "currentAge and voteAge : " << (currentAge and voteAge) << endl;
    cout << "currentAge and_eq voteAge : " << (currentAge and_eq voteAge) << endl;
    cout << "currentAge or voteAge : " << (currentAge or voteAge) << endl;
    cout << "currentAge or_eq voteAge : " << (currentAge or_eq voteAge) << endl;
    cout << "currentAge xor voteAge : " << (currentAge xor voteAge) << endl;
    cout << "currentAge xor_eq voteAge : " << (currentAge xor_eq voteAge) << endl;
    cout << "not currentAge : " << (not currentAge) << endl;
    cout << "not voteAge : " << (not voteAge) << endl;

    return 0;
}