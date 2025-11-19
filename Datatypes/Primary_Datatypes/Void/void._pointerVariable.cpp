using namespace std;

#include <iostream>

int main()
{
//    void voidVar;   // error: variable or field 'voidVar' declared void
    void *voidVarPtr;

    char Char;      int Int;        float Float;        double Double;
    Char = 'a', Int = 75643, Float = 76.349, Double = 8694.204221;

    char *charPtr;      int *intPtr;        float *floatPtr;        double *doublePtr;
    charPtr = &Char, intPtr = &Int, floatPtr = &Float, doublePtr = &Double;

    voidVarPtr = charPtr;     
//    cout << "*voidVarPtr : " << *voidVarPtr << ", voidVarPtr : " << voidVarPtr << " and &voidVarPtr : " << &voidVarPtr << endl; // error: variable or field 'voidVar' declared void
    cout << "*(char *)voidVarPtr : " << *(char *)voidVarPtr << ", voidVarPtr : " << voidVarPtr << " and &voidVarPtr : " << &voidVarPtr << endl; // error: 'void*' is not a pointer-to-object type
    cout << "Changes in voidPtr : *(char*)voidVarPtr = 'f';" << endl;
//    voidVarPtr = 'f';   // error: invalid conversion from 'char' to 'void*' [-fpermissive]
    *(char*)voidVarPtr = 'f';
    cout << "*(char *)voidVarPtr : " << *(char *)voidVarPtr << ", voidVarPtr : " << voidVarPtr << " and &voidVarPtr : " << &voidVarPtr << endl;

    cout << endl;

    voidVarPtr = intPtr;
//    cout << "*voidVarPtr : " << *voidVarPtr << ", voidVarPtr : " << voidVarPtr << " and &voidVarPtr : " << &voidVarPtr << endl; // error: 'void*' is not a pointer-to-object type    
    cout << "*(int *)voidVarPtr : " << *(int *)voidVarPtr << ", voidVarPtr : " << voidVarPtr << " and &voidVarPtr : " << &voidVarPtr << endl;
    cout << "Changes in voidPtr : *(int*)voidVarPtr = 902435;" << endl;
//    voidVarPtr = 'f';   // error: invalid conversion from 'int' to 'void*' [-fpermissive]
    *(int*)voidVarPtr = 902435;
    cout << "*(int *)voidVarPtr : " << *(int *)voidVarPtr << ", voidVarPtr : " << voidVarPtr << " and &voidVarPtr : " << &voidVarPtr << endl;

    cout << endl;

    voidVarPtr = floatPtr;
//    cout << "*voidVarPtr : " << *voidVarPtr << ", voidVarPtr : " << voidVarPtr << " and &voidVarPtr : " << &voidVarPtr << endl; // error: 'void*' is not a pointer-to-object type    
    cout << "*(float *)voidVarPtr : " << *(float *)voidVarPtr << ", voidVarPtr : " << voidVarPtr << " and &voidVarPtr : " << &voidVarPtr << endl;
    cout << "Changes in voidPtr : *(float*)voidVarPtr = 34.7865;" << endl;
//    voidVarPtr = 'f';   // error: invalid conversion from 'float' to 'void*' [-fpermissive]
    *(float*)voidVarPtr = 34.7865;
    cout << "*(float *)voidVarPtr : " << *(float *)voidVarPtr << ", voidVarPtr : " << voidVarPtr << " and &voidVarPtr : " << &voidVarPtr << endl;

    cout << endl;

    voidVarPtr = doublePtr;
//    cout << "*voidVarPtr : " << *voidVarPtr << ", voidVarPtr : " << voidVarPtr << " and &voidVarPtr : " << &voidVarPtr << endl; // error: 'void*' is not a pointer-to-object type         
    cout << "*(double *)voidVarPtr : " << *(double *)voidVarPtr << ", voidVarPtr : " << voidVarPtr << " and &voidVarPtr : " << &voidVarPtr << endl;
    cout << "Changes in voidPtr : *(double*)voidVarPtr = 8654.43267;" << endl;
//    voidVarPtr = 'f';   // error: invalid conversion from 'double' to 'void*' [-fpermissive]
    *(double*)voidVarPtr = 8654.43267;
    cout << "*(double *)voidVarPtr : " << *(double *)voidVarPtr << ", voidVarPtr : " << voidVarPtr << " and &voidVarPtr : " << &voidVarPtr << endl;

    return 0;
}