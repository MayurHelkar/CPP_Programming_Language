using namespace std;

#include <iostream>

int main()
{
    string string_L1 = "First String";
    string string_L2;
    
    cout << "String variable, sizeof() " << endl;
    cout << "string_L1 : " << sizeof(string_L1) << endl;
    cout << "string_L1 : " << sizeof(string_L2) << endl;

    cout << endl;

    cout << "String variable, sizeof() " << endl;
    cout << "&string_L1 : " << sizeof(&string_L1) << endl;
    cout << "&string_L1 : " << sizeof(&string_L2) << endl;

    cout << endl;

//    string_L2 = "Second String : Initialized after Declare :" << endl; // error: invalid operands of types 'const char [44]' and '<unresolved overloaded function type>' to binary 'operator<<'
//    string_L2 = "Second String" << endl; // error: invalid operands of types 'const char [14]' and '<unresolved overloaded function type>' to binary 'operator<<'
/*
    cout << "String variable after Initialize, sizeof() " << endl;
    cout << "string_L1 : " << sizeof(string_L2) << endl;
*/

/*
    cout << endl;

    cout << "String variables, Value :" << endl;
    cout << "*string_L1 : " << *string_L1 << endl; // error: no match for 'operator*' (operand type is 'std::string' {aka 'std::__cxx11::basic_string<char>'})
    cout << "*string_L2 : " << *string_L2 << endl; // error: no match for 'operator*' (operand type is 'std::string' {aka 'std::__cxx11::basic_string<char>'})
*/
    cout << endl;

    cout << "String variables, Value :" << endl;
    cout << "string_L1 : " << string_L1 << endl;
    cout << "string_L2 : " << string_L2 << endl;

    cout << endl;

    cout << "String variables, Address :" << endl;
    cout << "&string_L1 : " << &string_L1 << endl;
    cout << "&string_L2 : " << &string_L2 << endl;

    return 0;
}