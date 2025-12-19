using namespace std;

#include <iostream>

int main()
{
    int Number;
    int loop = 1;

    cout << "Number to print Multiplication Table : ";
    cin >> Number;

    cout << endl;

    cout << Number << " Multiplication table ::" << endl;
    for(;loop < 11; loop++)
    {
        switch(Number)
        {
            case 1:
            {
                cout << Number << " * " << loop << " = " << loop << endl;
                break;
            }
            case 2:
            {
                cout << Number << " * " << loop << " = " << loop << 1 << endl;
                break;
            }
            case 3:
            {
                cout << Number << " * " << loop << " = " << (loop << 1) + loop << endl;
                break;
            }
            case 4:
            {
                cout << Number << " * " << loop << " = " << (loop << 2) << endl;
                break;
            }
            case 5:
            {
                cout << Number << " * " << loop << " = " << (loop << 2) + loop << endl;
                break;
            }
            case 6:
            {
                cout << Number << " * " << loop << " = " << (loop << 2) + (loop << 1) << endl;
                break;
            }
            case 7:
            {
                cout << Number << " * " << loop << " = " << (loop << 2) + (loop << 1) + loop << endl;
                break;
            }
            case 8:
            {
                cout << Number << " * " << loop << " = " << loop << 3 << endl;
                break;
            }
            case 9:
            {
                cout << Number << " * " << loop << " = " << (loop << 3) + loop << endl;
                break;
            }
            case 10:
            {
                cout << Number << " * " << loop << " = " << (loop << 3) + (loop << 1) << endl;
                break;
            }
        }
    }

    return 0;
}