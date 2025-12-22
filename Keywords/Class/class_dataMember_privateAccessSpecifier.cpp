using namespace std;

#include <iostream>

class datatype
{
    int privateInt;

    public:

    void display()
    {
        cout << "privateInt : " << privateInt << " and &privateInt : " << &privateInt << endl;
    }

    int privateIntFunction(int privateInt)
    {
        this->privateInt = privateInt;
        cout << "this->privateInt : " << this->privateInt << " and &this->privateInt : " << &this->privateInt << endl;
        cout << "privateInt : " << privateInt << " and privateInt : " << &privateInt << endl;
        cout << "Return value : ";
        
        return privateInt;
    }
} dT;

int main()
{
//    cout << "dT.privateInt  : " << dT.privateInt << " and &dT.privateInt  : " << dT.privateInt << endl; // error: 'int datatype::privateInt' is private within this context
//    cout << endl;

    dT.display();

    cout << endl;

    cout << "dT.privateIntFunction(524397) :" << endl << dT.privateIntFunction(524397) << endl;

    return 0;
}