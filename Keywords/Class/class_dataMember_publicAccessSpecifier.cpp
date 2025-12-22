using namespace std;

#include <iostream>

class datatype
{
    public:
    int publicInt;

    void display()
    {
        cout << "publicInt : " << publicInt << " and &publicInt : " << &publicInt << endl;
    }

    int publicIntFunction(int publicInt)
    {
        this->publicInt = publicInt;
        cout << "this->publicInt : " << this->publicInt << " and &this->publicInt : " << &this->publicInt << endl;
        cout << "publicInt : " << publicInt << " and publicInt : " << &publicInt << endl;
        cout << "Return value : ";

        return publicInt;
    }
} dT;

int main()
{
    cout << "dT.publicInt : " << dT.publicInt << " and &dT.publicInt : " << dT.publicInt << endl;

    cout << endl;

    dT.display();

    cout << endl;
    
    cout << dT.publicIntFunction(92363) << endl;

    return 0;
}