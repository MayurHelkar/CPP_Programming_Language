using namespace std;

#include <iostream>

class datatype
{
    public:
    void displayPublic()
    {
        cout << "Public : Class Function Member" << endl;
    }
} dT;

int main()
{
    cout << "When Public function member :" << endl;
    dT.displayPublic();

    return 0;
}