using namespace std;

#include <iostream>

/*
class // error: expected identifier before 'int'
      // error: two or more data types in declaration of 'main'
*/

/*
class {} // error: expected ';' after class definition
         // error: abstract declarator '<unnamed class>' used as declaration
*/

// class {}; // error: abstract declarator '<unnamed class>' used as declaration

class Class_declare_noMember{};

// class Class_declare_noMember{ char Char; }; // error: redefinition of 'class Class_declare_noMember'

class Class_declare_charMember{ char Char; };
class Class_declare_intMember{ int Int; };
class Class_declare_floatMember{ float Float; };
class Class_declare_doubleMember{ double Double; };

int main()
{
    cout << "Class_declare_noMember :" << endl;
    cout << "Size : " << sizeof(Class_declare_noMember) << endl;
//    cout << "Value : " << Class_declare_noMember << endl; // error: expected primary-expression before '<<' token
//    cout << "Address : " << &Class_declare_noMember << endl; // error: expected primary-expression before '<<' token

    cout << endl;

    cout << "Class_declare_charMember :" << endl;
    cout << "Size : " << sizeof(Class_declare_charMember) << endl;

    cout << endl;

    cout << "Class_declare_intMember :" << endl;
    cout << "Size : " << sizeof(Class_declare_intMember) << endl;

    cout << endl;

    cout << "Class_declare_floatMember :" << endl;
    cout << "Size : " << sizeof(Class_declare_floatMember) << endl;

    cout << endl;

    cout << "Class_declare_doubleMember :" << endl;
    cout << "Size : " << sizeof(Class_declare_doubleMember) << endl;

    return 0;
}