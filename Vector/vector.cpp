using namespace std;

#include <iostream>
#include <vector>

int main()
{
    vector <int> v1;
    cout << "Size of v1 : " << sizeof(v1) << endl;
//    cout << "V1 value : " << v1 << endl;

    vector <int> v2(3, 5);
    cout << "v2 ::" << endl;
    for(int x : v2)
    {
        cout << x << " ";
    }

    cout << endl << endl;

    vector <int> v3 = { 1, 2, 3 };
    cout << "v3 ::" << endl;
    for(int x : v3)
    {
        cout << x << " ";
    }

    cout << endl << endl;

    return 0;
}