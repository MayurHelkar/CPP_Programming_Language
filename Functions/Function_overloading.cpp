#include <iostream>

using namespace std;

// int area(int L, int B)
inline int area(int L, int B)
{
    return L * B;
}

// float area(float L, float B)
inline float area(float L, float B)
{
    return L * B;
}

int main()
{
    int lI = 12, bI = 34;
    float lF = 54.34, bF = 12.54;

    cout << "area(lI, bI) : " << area(lI, bI) << endl;

    cout << endl;

    cout << "area(lF, bF) : " << area(lF, bF) << endl;

    return 0;
}