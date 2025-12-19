using namespace std;

#include <iostream>

int main()
{
    int Number;
    int loop = 1;

    cout << "Number to print Multiplication Table : " ;
    cin >> Number ;

    cout << Number << " Multiplication table ::" << endl;
    do
    {
        switch(Number)
        {
            case 1:
            {
                cout << Number << " * " << loop << " = " << loop ;
                break;
            }
            case 2:
            {
                cout << Number << " * " << loop << " = " << loop << 1 ;
                break;
            }
            case 3:
            {
                cout << Number << " * " << loop << " = " << (loop << 1) + loop ;
                break;
            }
            case 4:
            {
                cout << Number << " * " << loop << " = " << (loop << 2) ;
                break;
            }
            case 5:
            {
                cout << Number << " * " << loop << " = " << (loop << 2) + loop ;
                break;
            }
            case 6:
            {
                cout << Number << " * " << loop << " = " << (loop << 2) + (loop << 1) ;
                break;
            }
            case 7:
            {
                cout << Number << " * " << loop << " = " << (loop << 2) + (loop << 1) + loop ;
                break;
            }
            case 8:
            {
                cout << Number << " * " << loop << " = " << loop << 3 ;
                break;
            }
            case 9:
            {
                cout << Number << " * " << loop << " = " << (loop << 3) + loop ;
                break;
            }
            case 10:
            {
                cout << Number << " * " << loop << " = " << (loop << 3) + (loop << 1) ;
                break;
            }
        }
        loop++;
    }
    while(loop < 11);

    return 0;
}