using namespace std;

#include <iostream>

class Class
{
    public:
    int Int;

    Class(int Int)
    {
        cout << "Class Constructor" << endl;
        cout << "Int : " << Int << " and &Int : " << &Int << endl;
        cout << "this->Int : " << this->Int << " and &this->Int : " << &this->Int << endl;
    }

    ~Class(void)
    {
        cout << "Class Destructor" << endl;        
        cout << "Int : " << Int << " and &Int : " << &Int << endl;
        cout << "this->Int : " << this->Int << " and &this->Int : " << &this->Int << endl;
    }
} Object_G2 = Class(1205);
// Object_G1; // error: no matching function for call to 'Class::Class()'
// Object_G3 = Class; // error: expected primary-expression before ';' token
// Object_G4.Class;  // error: expected initializer before '.' token
// ObjectG45Class(); // error: expected initializer before '.' token

int main()
{
//    Class Object_L1;    // error: no matching function for call to 'Class::Class()'
//    Class Obejct_L2 = Class(64343);
//    Class Object_L3 = Class;    // error: expected primary-expression before ';' token
//    Class Object_L4.Class(6544);    // error: expected initializer before '.' token
//    Class Object_L5.Class;  // error: expected initializer before '.' token

    cout << "Inside Main Function" << endl;

    return 0;
}