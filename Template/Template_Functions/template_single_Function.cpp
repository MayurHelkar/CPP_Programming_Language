using namespace std;

#include <iostream>

template <typename T> T functionTypeT(T dT)
{
    return dT;
}

int main()
{
//    cout << functionTypeT <char> (654) << endl;
    cout << functionTypeT <int> (746428) << endl;
    cout << functionTypeT <int> (93.456) << endl;
    cout << functionTypeT <float> (93.456) << endl;
    cout << functionTypeT <double> (9564.986754) << endl;
    
    return 0;
}