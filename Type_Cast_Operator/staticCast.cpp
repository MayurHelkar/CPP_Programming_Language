using namespace std;

#include <iostream>

int main()
{
    char Char = 'r', char_typeCast;
    int Int = 7645, int_typeCast;
    float Float= 67.23, float_typeCast;
    double Double = 876.323756, double_typeCast;

    cout << " static_cast <char> into char_typeCast :" << endl;
    char_typeCast = static_cast <char> (Char);      cout << "Char : " << char_typeCast << " and typeid(char_typeCast).name() : " << typeid(char_typeCast).name() << endl;
    char_typeCast = static_cast <char> (Int);       cout << "Int : " << char_typeCast << " and typeid(char_typeCast).name() : " << typeid(char_typeCast).name() << endl;
    char_typeCast = static_cast <char> (Float);     cout << "Float : " << char_typeCast << " and typeid(char_typeCast).name() : " << typeid(char_typeCast).name() << endl;
    char_typeCast = static_cast <char> (Double);    cout << "Double : " << char_typeCast << " and typeid(char_typeCast).name() : " << typeid(char_typeCast).name() << endl;

    cout << endl;

    cout << " static_cast <char> into int_typeCast :" << endl;
    int_typeCast = static_cast <int> (Char);      cout << "Char : " << int_typeCast << " and typeid(int_typeCast).name() : " << typeid(int_typeCast).name()  << endl;
    int_typeCast = static_cast <int> (Int);       cout << "Int : " << int_typeCast << " and typeid(int_typeCast).name() : " << typeid(int_typeCast).name()  << endl;
    int_typeCast = static_cast <int> (Float);     cout << "Float : " << int_typeCast << " and typeid(int_typeCast).name() : " << typeid(int_typeCast).name()  << endl;
    int_typeCast = static_cast <int> (Double);    cout << "Double : " << int_typeCast << " and typeid(int_typeCast).name() : " << typeid(int_typeCast).name()  << endl;

    cout << endl;

    cout << " static_cast <char> into float_typeCast :" << endl;
    float_typeCast = static_cast <float> (Char);      cout << "Char : " << float_typeCast << " and typeid(float_typeCast).name() : " << typeid(float_typeCast).name()  << endl;
    float_typeCast = static_cast <float> (Int);       cout << "Int : " << float_typeCast << " and typeid(float_typeCast).name() : " << typeid(float_typeCast).name()  << endl;
    float_typeCast = static_cast <float> (Float);     cout << "Float : " << float_typeCast << " and typeid(float_typeCast).name() : " << typeid(float_typeCast).name()  << endl;
    float_typeCast = static_cast <float> (Double);    cout << "Double : " << float_typeCast << " and typeid(float_typeCast).name() : " << typeid(float_typeCast).name()  << endl;

    cout << endl;

    cout << " static_cast <type> into double_typeCast :" << endl;
    double_typeCast = static_cast <double> (Char);      cout << "Char : " << double_typeCast << " and typeid(double_typeCast).name() : " << typeid(double_typeCast).name()  << endl;
    double_typeCast = static_cast <double> (Int);       cout << "Int : " << double_typeCast << " and typeid(double_typeCast).name() : " << typeid(double_typeCast).name()  << endl;
    double_typeCast = static_cast <double> (Float);     cout << "Float : " << double_typeCast << " and typeid(double_typeCast).name() : " << typeid(double_typeCast).name()  << endl;
    double_typeCast = static_cast <double> (Double);    cout << "Double : " << double_typeCast << " and typeid(double_typeCast).name() : " << typeid(double_typeCast).name()  << endl;

    return 0;
}