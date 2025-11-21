using namespace std;

#include <iostream>

enum days { Sunday, sunday = 0, Monday, monday = 1, Tuesday, tuesday = 2, Wednesday, wednesday = 3, Thursday, thursday = 4, Friday, friday = 5, Saturday, saturday = 6 } Day;

int main()
{
//    cout << "Size of enum : " << sizeof(enum) << endl;    // error: expected primary-expression before 'enum'
                                                        // error: expected ')' before 'enum'
    printf("Size of enum days : %d\n", sizeof(enum days));
    printf("Size of days : %d\n", sizeof(days));
    printf("Size of Days : %d\n", sizeof(Day));

    Day = tuesday;
    cout << Day << endl;

//    Thursday = 432; // error: lvalue required as left operand of assignment

    cout << days::wednesday << endl;

    cout << static_cast <int> (Thursday) << endl;

    typedef enum days daysTypedef;
    daysTypedef DaysTypedef;

    cout << DaysTypedef << endl;
    DaysTypedef = Saturday;     cout << DaysTypedef << endl;
    
    return 0;
}