using namespace std;

#include <iostream>


int main()
{
    auto charVar = 'a';
    auto intVar = 674;
    auto floatVar = 18.873;
    auto doubleVar = 967.2345;

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
//    cout << "&charVar : " << addressof(charVar) << endl; // Outputs value
    cout << "&charVar : " << (int*)addressof(charVar) << endl;
    cout << "&charVar : " << (void*)addressof(charVar) << endl;
    cout << "&intVar : " << addressof(intVar) << endl;
    cout << "&floatVar : " << addressof(floatVar) << endl;
    cout << "&doubleVar : " << addressof(doubleVar) << endl;

    return 0;
}