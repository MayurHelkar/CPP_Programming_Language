using namespace std;

#include <iostream>

class Class
{
    public:

    Class(void)
    {
        cout << "Class Constructor" << endl;
    }

    ~Class(void)
    {
        cout << "Class Destructor" << endl;
    }
}; //Object_G1, Object_G2 = Class();
// Object_G3 = Class; // error: expected primary-expression before ';' token
// Object_G4.Class;  // error: expected initializer before '.' token
// ObjectG45Class(); // error: expected initializer before '.' token

int main()
{
    Class Object_L1;
//    Class Obejct_L2 = Class();
//    Class Object_L3 = Class;    // error: expected primary-expression before ';' token
//    Class Object_L4.Class();    // error: expected initializer before '.' token
//    Class Object_L5.Class;  // error: expected initializer before '.' token

    cout << "Inside Main Function" << endl;

    return 0;
}