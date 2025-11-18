using namespace std;

#include <iostream>

template <typename T1, typename T2>
class Class
{
    public:
    T1 number;
    T2 weight;
};

Class <int, float> intDataMemberClass = { 542, 768.3465 };

int main()
{
    cout << intDataMemberClass.number << endl;
    cout << intDataMemberClass.weight << endl;

    return 0;
}