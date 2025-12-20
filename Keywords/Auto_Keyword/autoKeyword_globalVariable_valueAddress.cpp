using namespace std;

#include <iostream>

auto charVar = 'a';
auto intVar = 674;
auto floatVar = 18.873;
auto doubleVar = 967.2345;

int main()
{
/*
    cout << auto(char) << endl; // warning: 'auto(x)' only available with '-std=c++23' or '-std=gnu++23' [-Wc++23-extensions]
                                // error: expected primary-expression before 'auto'
    cout << auto(int) << endl;  // warning: 'auto(x)' only available with '-std=c++23' or '-std=gnu++23' [-Wc++23-extensions]
                                // error: expected primary-expression before 'auto'
    cout << auto(float) << endl; // warning: 'auto(x)' only available with '-std=c++23' or '-std=gnu++23' [-Wc++23-extensions]
                                 // error: expected primary-expression before 'auto'
    cout << auto(double) << endl; // warning: 'auto(x)' only available with '-std=c++23' or '-std=gnu++23' [-Wc++23-extensions]
                                  // error: expected primary-expression before 'auto'
*/

    cout << "Variables value ::" << endl;
    cout << "charVar : " << charVar << endl;
    cout << "intVar : " << intVar << endl;
    cout << "floatVar : " << floatVar << endl;
    cout << "doubleVar : " << doubleVar << endl;

    cout << endl << endl;

    cout << "Variables Address ::" << endl;
//    cout << "&charVar : " << &charVar << endl; // Outputs Value
//    cout << "&charVar : " << (char*)&charVar << endl; // Outputs Value
//    cout << "&charVar : " << int(&charVar) << endl; // error: cast from 'char*' to 'int' loses precision [-fpermissive]
    cout << "&charVar : " << (int*)&charVar << endl;
    cout << "&charVar : " << (void*)&charVar << endl;
    cout << "&intVar : " << &intVar << endl;
    cout << "&floatVar : " << &floatVar << endl;
    cout << "&doubleVar : " << &doubleVar << endl;

    return 0;
}