using namespace std;

#include <iostream>

bool bool_G;

int main()
{
    bool bool_L;
   
    cout << "Address ::" << endl;
    cout << "&bool_G : " << &bool_G << endl;
    cout << "&bool_L : " << &bool_L << endl;

    cout << endl;

    cout << "Value sizeof() ::" << endl;
    cout << "bool_G : " << sizeof(bool_G) << endl;
    cout << "bool_L : " << sizeof(bool_L) << endl;

    cout << endl;

    cout << "Address sizeof() ::" << endl;
    cout << "bool_G : " << sizeof(&bool_G) << endl;
    cout << "bool_L : " << sizeof(&bool_L) << endl;

    cout << endl;

    cout << "Initial values of bool : Declare without Initialization ::" << endl;
    cout << "bool_G : " << bool_G << endl;
    cout << "bool_L : " << bool_L << endl;

    cout << endl;

    bool_G = false;             bool_L = true;
    cout << "Value assign as \'false\' to bool_G and \'true\' to bool_L ::" << endl;
    cout << "bool_G : " << bool_G << endl;
    cout << "bool_L : " << bool_L << endl;

    cout << endl;

    bool_G = 1;                 bool_L = 0;
    cout << "Value assign as \'0\' to bool_G and \'1\' to bool_L ::" << endl;
    cout << "bool_G : " << bool_G << endl;
    cout << "bool_L : " << bool_L << endl;    

    cout << endl;

    bool_G = 256;                 bool_L = 255;
    cout << "Value assign as \'256\' to bool_G and \'255\' to bool_L ::" << endl;
    cout << "bool_G : " << bool_G << endl;
    cout << "bool_L : " << bool_L << endl;  

    cout << endl;

    bool_G = -1;                 bool_L = -0;
    cout << "Value assign as \'-1\' to bool_G and \'-0\' to bool_L ::" << endl;
    cout << "bool_G : " << bool_G << endl;
    cout << "bool_L : " << bool_L << endl; 

    return 0;
}