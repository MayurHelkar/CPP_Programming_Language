using namespace std;

#include <iostream>

int add(int, int);
int add(int, int, int);
int add(int, int, int, int);

int main()
{
    cout << "2 Int : " << add(12, 34) << endl;
    cout << "3 Int : " << add(12, 34, 56) << endl;
    cout << "4 Int : " << add(12, 34, 56, 78) << endl;

    return 0;
}

int add(int A, int B)
{
    return A + B;
}

int add(int A, int B, int C)
{
    return A + B + C;
}

int add(int A, int B, int C, int D)
{
    return A + B + C + D;
}
