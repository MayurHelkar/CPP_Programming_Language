using namespace std;

#include <iostream>

class datatype
{
    protected:
    int protectedInt;

    public :
    void display()
    {
        cout << "protectedInt : " << protectedInt << " and &protectedInt : " << &protectedInt << endl;
    }

    int protectedIntFunction(int protectedInt)
    {
        this->protectedInt = protectedInt;
        cout << "this->protectedInt : " << this->protectedInt << " and &this->protectedInt : " << &this->protectedInt << endl;
        cout << "protectedInt : " << protectedInt << " and protectedInt : " << &protectedInt << endl;
        cout << "Return value : ";

        return protectedInt;
    }
} dT;

int main()
{
//    cout << "dT.protectedInt : " << dT.protectedInt << " and &dT.protectedInt : " << dT.protectedInt << endl; // error: 'int datatype::protectedInt' is protected within this context
//    cout << endl;

    dT.display();

    cout << endl;
    cout << "dT.protectedIntFunction(7534) : " << endl << dT.protectedIntFunction(7534) << endl;

    return 0;
}