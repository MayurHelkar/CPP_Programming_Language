using namespace std;

#include<iostream>

int main()
{
    void *voidPtr;

    char charVar = 77;
    int intVar = 84563;
    float floatVar = 67.232556;
    double doubleVar = 67.232556;

//    voidPtr = charVar; // error: invalid conversion from 'char' to 'void*' [-fpermissive]
    voidPtr = &charVar;
    cout << "voidPtr pointing to charVar variable :" << endl;
    cout << "charVar : " << charVar << " and &charVar : " << endl;
//    cout << "*voidPtr : " << *voidPtr << ", voidPtr : " << (void *)voidPtr << " and &voidPtr : " << &voidPtr << endl; // error: 'void*' is not a pointer-to-object type
    cout << "voidPtr : " << (void *)voidPtr << " and &voidPtr : " << &voidPtr << endl;

    cout << endl;

//    voidPtr = intVar; // error: invalid conversion from 'int' to 'void*' [-fpermissive]
    voidPtr = &intVar;
    cout << "voidPtr pointing to intVar variable :" << endl;
//    cout << "*voidPtr : " << *voidPtr << ", voidPtr : " << (void *)voidPtr << " and &voidPtr : " << &voidPtr << endl; // error: 'void*' is not a pointer-to-object type
    cout << "voidPtr : " << (void *)voidPtr << " and &voidPtr : " << &voidPtr << endl;

    cout << endl;

//    voidPtr = floatVar; // error: invalid conversion from 'float' to 'void*' [-fpermissive]
    voidPtr = &floatVar;
    cout << "voidPtr pointing to floatVar variable :" << endl;
//    cout << "*voidPtr : " << *voidPtr << ", voidPtr : " << (void *)voidPtr << " and &voidPtr : " << &voidPtr << endl; // error: 'void*' is not a pointer-to-object type
    cout << "voidPtr : " << (void *)voidPtr << " and &voidPtr : " << &voidPtr << endl;

    cout << endl;

//    voidPtr = doubleVar; // error: invalid conversion from 'double' to 'void*' [-fpermissive]
    voidPtr = &doubleVar;
    cout << "voidPtr pointing to doubleVar variable :" << endl;
//    cout << "*voidPtr : " << *voidPtr << ", voidPtr : " << (void *)voidPtr << " and &voidPtr : " << &voidPtr << endl; // error: 'void*' is not a pointer-to-object type
    cout << "voidPtr : " << (void *)voidPtr << " and &voidPtr : " << &voidPtr << endl;
     
    return 0;
}