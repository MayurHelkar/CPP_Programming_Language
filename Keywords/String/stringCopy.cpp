using namespace std;

#include <iostream>

int main()
{
//    string stringSource = {"String"};
    string stringSource = "String";
    char character_32Size_L1[32] =  { 'C', 'h', 'a', 'r', 'a', 'c', 't', 'e', 'r', ' ', 'S', 'i', 'z', 'e', ' ', '3', '2', ' ', 'L', '1' };
    char character_32Size_L2[32] = { "Size_Character_L2 32" };
    char character_32Size_L3[32] = "32_Character_Size_L3";
    string stringDestination;

    stringDestination = stringSource;

    cout << "Value of Strings :" << endl;
    cout << "stringSource : " << stringSource << endl;
    cout << "stringDestination : " << stringDestination << endl;

    cout << endl;

    cout << "Address of Strings :" << endl;
    cout << "&stringSource : " << &stringSource << endl;
    cout << "&stringDestination : " << &stringDestination << endl;

    cout << endl;

    stringDestination = character_32Size_L1;
    cout << "Character value assign to String value : Character wiht \'\' inside {}" << endl;
    cout << "stringDestination : " << stringDestination << endl;

    cout << endl;

    stringDestination = character_32Size_L2;
    cout << "Character value assign to String value : Character with {} and \"\"" << endl;
    cout << "stringDestination : " << stringDestination << endl;

    cout << endl;

    stringDestination = character_32Size_L3;
    cout << "Character value assign to String value : Character without {} only \"\"" << endl;
    cout << "stringDestination : " << stringDestination << endl;

    return 0;
}