using namespace std;

#include <iostream>

int main()
{
//    char *charPtr_define = &charVar, charVar = 65; // error: 'charVar' was not declared in this scope; did you mean 'char'?

    char charVar = 65,*charPtr_define = &charVar;
    cout << "charVar value defined and charPtr_define address pointed to charVar :" << endl;
//    cout << "charVar : " << charVar << " and &charVar : " << &charVar << endl;
    cout << "charVar : " << charVar << " and (void *)&charVar : " << (void *)&charVar << endl;
//    cout << "*charPtr_define : " << *charPtr_define <<  ", charPtr_define : " << charPtr_define << " and &charPtr_define : " << &charPtr_define << endl;
    cout << "*charPtr_define : " << *charPtr_define <<  ", (void *)charPtr_define : " << (void *)charPtr_define << " and &charPtr_define : " << &charPtr_define << endl;

    cout << endl;
    
    charVar = 87;
    cout << "charVar value changed to direct value : " << endl;
    cout << "charVar : " << charVar << " and (void *)&charVar : " << (void *)&charVar << endl;
    cout << "*charPtr_define : " << *charPtr_define <<  ", (void *)charPtr_define : " << (void *)charPtr_define << " and &charPtr_define : " << &charPtr_define << endl;

    cout << endl;
    
    *charPtr_define = 105;
    cout << "*charPtr_define pointed to direct value : " << endl;
    cout << "charVar : " << charVar << " and (void *)&charVar : " << (void *)&charVar << endl;
    cout << "*charPtr_define : " << *charPtr_define <<  ", (void *)charPtr_define : " << (void *)charPtr_define << " and &charPtr_define : " << &charPtr_define << endl;

    cout << endl;

//    char charVar1 = 117, charPtr_define = &charVar1; // error: conflicting declaration 'char charPtr_define'
    char charVar1 = 117;
    charPtr_define = &charVar1;
    cout << "charPtr_define pointed to charVar1 address : " << endl;
    cout << "charVar : " << charVar << " and (void *)&charVar : " << (void *)&charVar << endl;
    cout << "*charPtr_define : " << *charPtr_define <<  ", (void *)charPtr_define : " << (void *)charPtr_define << " and &charPtr_define : " << &charPtr_define << endl;

    return 0;
}