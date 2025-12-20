using namespace std;

#include <iostream>

int main()
{
    string string_declare_curlyBrackets_L1 = { "First String" };
    string string_declare_curlyBrackets_L2 = "Second String";

    cout << "Value : sizeof() operator" << endl;
    cout << "string_declare_curlyBrackets_L1 : " << sizeof(string_declare_curlyBrackets_L1) << endl;
    cout << "string_declare_curlyBrackets_L2 : " << sizeof(string_declare_curlyBrackets_L2) << endl;

    cout << endl;

    cout << "Address : sizeof() operator" << endl;
    cout << "string_declare_curlyBrackets_L1 : " << sizeof(&string_declare_curlyBrackets_L1) << endl;
    cout << "string_declare_curlyBrackets_L2 : " << sizeof(&string_declare_curlyBrackets_L2) << endl;

    cout << endl;

    cout << "Value : " << endl;
    cout << "string_declare_curlyBrackets_L1 : " << string_declare_curlyBrackets_L1 << endl;
    cout << "string_declare_curlyBrackets_L2 : " << string_declare_curlyBrackets_L2 << endl;

    cout << endl;

    cout << "Address " << endl;
    cout << "string_declare_curlyBrackets_L1 : " << &string_declare_curlyBrackets_L1 << endl;
    cout << "string_declare_curlyBrackets_L2 : " << &string_declare_curlyBrackets_L2 << endl;

    cout << endl;

    string_declare_curlyBrackets_L1 = "String First";
//    string_declare_curlyBrackets_L2[0] = "C"; // error: invalid conversion from 'const char*' to '__gnu_cxx::__alloc_traits<std::allocator<char>, char>::value_type' {aka 'char'} [-fpermissive]
    string_declare_curlyBrackets_L2[0] = 'C';
    cout << "String and Character value changes : " << endl;
    cout << "string_declare_curlyBrackets_L1 : " << string_declare_curlyBrackets_L1 << endl;
    cout << "string_declare_curlyBrackets_L2 : " << string_declare_curlyBrackets_L2 << endl;

    cout << endl;

//    string_declare_curlyBrackets_L1[31] = 'Z'; // Exception has occurred. Unknown signal
//    string_declare_curlyBrackets_L2[31] = 90; // Exception has occurred. Unknown signal
    string_declare_curlyBrackets_L1 = { "First String : Changes done" };
    string_declare_curlyBrackets_L2 = "Second String : Changes done";
    cout << "String and Character value changes : string value less than 32 " << endl;
    cout << "string_declare_curlyBrackets_L1 : " << string_declare_curlyBrackets_L1 << endl;
    cout << "string_declare_curlyBrackets_L2 : " << string_declare_curlyBrackets_L2 << endl;

    return 0;
}