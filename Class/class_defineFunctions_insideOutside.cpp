#include <iostream>

using namespace std;

class Class
{
    public:
    void class_insideFunction(void)
    {
        cout << "Function inside Class" << endl;
    }

    void class_outsideFunction(void);
};

void Class::class_outsideFunction(void)
{
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