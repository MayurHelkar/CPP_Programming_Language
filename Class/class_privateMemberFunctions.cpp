#include <iostream>

using namespace std;

class Class
{
    void privateFunction(void)
    {
        cout << "Private function inside Class" << endl;
    }

    public:
//    void class_insideFunction(void)
    inline void class_insideFunction(void)
    {
        privateFunction();
        cout << "Function inside Class" << endl;
    }

//    void class_outsideFunction(void);
    inline void class_outsideFunction(void);
};

// void Class::class_outsideFunction(void)
inline void Class::class_outsideFunction(void)
{
    Class :: privateFunction();
    cout << "Function outside Class" << endl;
}

int main()
{
    Class Class_L;

    Class_L.class_insideFunction();

    cout << endl;

    Class_L.class_outsideFunction();

    return 0;
}