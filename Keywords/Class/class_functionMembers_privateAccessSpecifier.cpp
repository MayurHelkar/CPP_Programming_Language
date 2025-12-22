using namespace std;

#include <iostream>

class datatype
{
    void displayPrivate()
    {
        cout << "Private : Class Function Member" << endl;
    }

    public:
    void displayPublic()
    {
        displayPrivate();
        cout << "Public : Class Function Member" << endl;
    }
} dT;

int main()
{
//    dT.displayPrivate(); // error: 'void datatype::displayPrivate()' is private within this context

    cout << endl;

    cout << "When Private function member called inside Public function member :" << endl;
    dT.displayPublic();

    return 0;
}