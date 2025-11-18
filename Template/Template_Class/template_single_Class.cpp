using namespace std;

#include <iostream>

template <typename T>
class Class
{
    public:
    T number;
    T height_in_cm;
};

Class <int> intDataMemberClass = { 542, 768 };

int main()
{
    cout << intDataMemberClass.number << endl;
    cout << intDataMemberClass.height_in_cm << endl;

    return 0;
}