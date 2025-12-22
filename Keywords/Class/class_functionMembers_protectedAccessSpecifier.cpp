using namespace std;

#include <iostream>

class datatype
{
    protected :
    void displayProtected()
    {
        cout << "Protected : Class Function Member" << endl;
    }

    public:
    void displayPublic()
    {
        displayProtected();
        cout << "Public : Class Function Member" << endl;
    }
} dT;

int main()
{
//    dT.displayProtected(); // error: 'void datatype::displayProtected()' is protected within this context
//    cout << endl;

    cout << "When Private and Public function member called inside Public function member :" << endl;
    dT.displayPublic();

    return 0;
}