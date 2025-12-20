using namespace std;

#include <iostream>

int add(int, int);
float add(float, float);
double add(double, double);

int main()
{
    cout << "Int : " << add(12, 34) << endl;
    cout << "Float : " << add(12.34, 56.78) << endl;
    cout << "Double : " << add(76652.33434, 675656.78976) << endl;

    return 0;
}

int add(int A, int B)
{
    return A + B;
}

float add(float C, float D)
{
    return C + D;
}

double add(double E, double F)
{
    return E + F;
}