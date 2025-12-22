using namespace std;

#define ZERO 0

#include<iostream>

int main()
{
    char charVar = 77, *charPtr;
    int intVar = 84563, *intPtr;
    float floatVar = 67.232556, *floatPtr;
    double doubleVar = 67.232556, *doublePtr;

    cout << "All Primary datatype pointers without pointing to another variables : Only declaration not Initialized ::" << endl;
/*
    cout << "*charPtr : " << *charPtr << ", charPtr : " << (void *)charPtr << " and &charPtr : " << &charPtr << endl; // Exception has occurred. Segmentation fault
    cout << "*intPtr : " << *intPtr << ", intPtr : " << intPtr << " and &intPtr : " << &intPtr << endl; // Exception has occurred. Segmentation fault
    cout << "*floatPtr : " << *floatPtr << ", floatPtr : " << floatPtr << " and &floatPtr : " << &floatPtr << endl; // Exception has occurred. Segmentation fault
    cout << "*doublePtr : " << *doublePtr << ", doublePtr : " << doublePtr << " and &doublePtr : " << &doublePtr << endl; // Exception has occurred. Segmentation fault

    cout << "charPtr : " << charPtr << " and &charPtr : " << &charPtr << endl; // Exception has occurred. Segmentation fault
    cout << "intPtr : " << intPtr << " and &intPtr : " << &intPtr << endl; // Exception has occurred. Segmentation fault
    cout << "floatPtr : " << floatPtr << " and &floatPtr : " << &floatPtr << endl; // Exception has occurred. Segmentation fault
    cout << "doublePtr : " << doublePtr << " and &doublePtr : " << &doublePtr << endl; // Exception has occurred. Segmentation fault
*/
    cout << "&charPtr : " << &charPtr << endl;
    cout << "&intPtr : " << &intPtr << endl;
    cout << "&floatPtr : " << &floatPtr << endl;
    cout << "&doublePtr : " << &doublePtr << endl;

    cout << endl;

    cout << "Pointer after assigned variable NULL : " << endl;
//    charPtr = intPtr = floatPtr = doublePtr = NULL; // error: cannot convert 'double*' to 'float*' in assignment
    charPtr = NULL, intPtr = NULL, floatPtr = NULL, doublePtr = NULL;
/*
    cout << "*charPtr : " << *charPtr << ", charPtr : " << (void *)charPtr << " and &charPtr : " << &charPtr << endl;
    cout << "*intPtr : " << *intPtr << ", intPtr : " << intPtr << " and &intPtr : " << &intPtr << endl;
    cout << "*floatPtr : " << *floatPtr << ", floatPtr : " << floatPtr << " and &floatPtr : " << &floatPtr << endl;
    cout << "*doublePtr : " << *doublePtr << ", doublePtr : " << doublePtr << " and &doublePtr : " << &doublePtr << endl;
*/
    cout << "charPtr : " << (void *)charPtr << " and &charPtr : " << &charPtr << endl; // Exception has occurred. Segmentation fault
    cout << "intPtr : " << intPtr << " and &intPtr : " << &intPtr << endl; // Exception has occurred. Segmentation fault
    cout << "floatPtr : " << floatPtr << " and &floatPtr : " << &floatPtr << endl; // Exception has occurred. Segmentation fault
    cout << "doublePtr : " << doublePtr << " and &doublePtr : " << &doublePtr << endl; // Exception has occurred. Segmentation fault

    cout << endl;

    cout << "Pointer after assigned another Variable : " << endl;
    charPtr = &charVar, intPtr = &intVar, floatPtr = &floatVar, doublePtr = &doubleVar;
    cout << "*charPtr : " << *charPtr << ", charPtr : "<< (void *)charPtr << " and &charPtr : " << &charPtr << endl;
    cout << "*intPtr : " << *intPtr << ", intPtr : "<< intPtr << " and &intPtr : " << &intPtr << endl;
    cout << "*floatPtr : " << *floatPtr << ", floatPtr : "<< floatPtr << " and &floatPtr : " << &floatPtr << endl;
    cout << "*doublePtr : " << *doublePtr << ", doublePtr : "<< doublePtr << " and &doublePtr : " << &doublePtr << endl;

    cout << endl;

    cout << "Pointer after assigned to Zero : " << endl;
    charPtr = ZERO, intPtr = ZERO, floatPtr = ZERO, doublePtr = ZERO;
    cout << "charPtr : "<< (void *)charPtr << " and &charPtr : " << &charPtr << endl;
    cout << "intPtr : "<< intPtr << " and &intPtr : " << &intPtr << endl;
    cout << "floatPtr : "<< floatPtr << " and &floatPtr : " << &floatPtr << endl;
    cout << "doublePtr : "<< doublePtr << " and &doublePtr : " << &doublePtr << endl;

    cout << endl;

    cout << "Pointer after assigned to Define ZERO : " << endl;
    charPtr = 0, intPtr = 0, floatPtr = 0, doublePtr = 0;
    cout << "charPtr : "<< (void *)charPtr << " and &charPtr : " << &charPtr << endl;
    cout << "intPtr : "<< intPtr << " and &intPtr : " << &intPtr << endl;
    cout << "floatPtr : "<< floatPtr << " and &floatPtr : " << &floatPtr << endl;
    cout << "doublePtr : "<< doublePtr << " and &doublePtr : " << &doublePtr << endl;

    return 0;
}