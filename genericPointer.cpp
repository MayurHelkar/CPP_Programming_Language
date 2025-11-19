#include <iostream>

using namespace std;

int main()
{
    void *gp, *GP;

//    char *charPtr = &Char, Char = 65;   // error: 'Char' was not declared in this scope; did you mean 'char'?
    char Char = 65, *charPtr = &Char;
    int Int = 7465543, *intPtr = &Int;

    gp = charPtr;       cout << "gp : " << gp  << " and &gp : " << gp << endl;
    GP = intPtr;        cout << "GP : " << GP << " and &GP : " << GP << endl;
    GP = (char *)gp;    cout << "GP : " << GP << " and &GP : " << GP << endl;

    return 0;
}