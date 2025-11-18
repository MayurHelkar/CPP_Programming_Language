using namespace std;

#include <iostream>

template <typename T1, typename T2> T2 functionTypeT(T1 dT1, T2 dT2)
{
    if(dT1 > dT2)
    {
        return dT1;
    }
    else
    {
        return dT2;
    }
}

int main()
{
//    cout << functionTypeT <char> (654) << endl;
    cout << functionTypeT <int, int> (746428, 74563) << endl;
    cout << functionTypeT <float, int> (93.456, 86786) << endl;
    cout << functionTypeT <float, int> (93.456, 93) << endl;
    cout << functionTypeT <int, float> (9563, 34.987) << endl;
    cout << functionTypeT <int, float> (9563, 34.987) << endl;
    cout << functionTypeT <double, float> (93.456, 93.45) << endl;
    cout << functionTypeT <float, double> (9564.984, 9564.986754) << endl;
    
    return 0;
}