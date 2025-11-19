using namespace std;

#include <iostream>

class Class
{
    int privateInt;
    
    protected: int protectedInt;

    public: int publicInt;

    public:
    void setProtected_thisPointer(int protectedInt)
    {
        this->protectedInt = protectedInt;
        cout << "protectedInt : " << protectedInt << " and &protectedInt : " << &protectedInt << endl;
        cout << "this->protectedInt : " << this->protectedInt << " and &this->protectedInt : " << &this->protectedInt << endl;
    }
    void setPrivate_thisPointer(int privateInt)
    {
        this->privateInt = privateInt;
        cout << "privateInt : " << privateInt << " and &privateInt : " << &privateInt << endl;
        cout << "this->privateInt : " << this->privateInt << " and &this->privateInt : " << &this->privateInt << endl;
    }

    int getProtected_thisPointer()
    {
        return this->protectedInt;
    }
    int getPrivate_thisPointer()
    {
        return this->privateInt;
    }

    void setProtected(int proI)
    {
        this->protectedInt = proI;
        cout << "protectedInt : " << protectedInt << " and &protectedInt : " << &protectedInt << endl;
        cout << "proI : " << proI << " and &proI : " << &proI << endl;
    }
    void setPrivate(int priI)
    {
        privateInt = priI;
        cout << "privateInt : " << privateInt << " and &privateInt : " << &privateInt << endl;
        cout << "priI : " << priI << " and &priI : " << &priI << endl;
    }

    int getProtected()
    {
        return protectedInt;
    }
    int getPrivate()
    {
        return privateInt;
    }
};

int main()
{
    Class Class_L;

    cout << "publicInt : " << Class_L.publicInt << " and &publicInt : " << &Class_L.publicInt << endl;

    cout << endl;

    Class_L.setProtected_thisPointer(1243);
    cout << Class_L.getProtected_thisPointer() << endl;

    cout << endl;

    Class_L.setProtected(6457);
    cout << Class_L.getProtected() << endl;

    cout << endl << endl;

    Class_L.setPrivate_thisPointer(7341);
    cout << Class_L.getPrivate_thisPointer() << endl;

    cout << endl;

    Class_L.setPrivate(7343);
    cout << Class_L.getPrivate() << endl;

    return 0;
}