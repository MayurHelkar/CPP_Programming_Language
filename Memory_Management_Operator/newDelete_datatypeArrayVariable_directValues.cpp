#define SIZE 10

using namespace std;

#include <iostream>

int main()
{
    int i;

    int *intPtr_declare = new int[SIZE];
    
    for(i = 0; i < SIZE; i++)
    {
        cout << "*intPtr_declare : " << *intPtr_declare << ", ";     cout << "intPtr_declare : " << intPtr_declare << " and ";   cout << "&intPtr_declare : " << &intPtr_declare << endl;
    }
    
    cout << endl;

    cout << "After changes in *intPtr_declare using i loop value" << endl;
    for(i = 0; i < SIZE; i++)
    {
        *intPtr_declare = i;
        cout << "*intPtr_declare : " << *intPtr_declare << ", ";     cout << "intPtr_declare : " << intPtr_declare << " and ";   cout << "&intPtr_declare : " << &intPtr_declare << endl;        
    }
    
    cout << endl;

    int *intPtr_declareInitialize = new int[SIZE];
    for(i = 0; i < SIZE; i++)
    {
        cout << "*intPtr_declareInitialize : " << *intPtr_declareInitialize << ", ";     cout << "intPtr_declareInitialize : " << intPtr_declareInitialize << " and ";   cout << "&intPtr_declareInitialize : " << &intPtr_declareInitialize << endl;
    }

    cout << endl;

    cout << "After changes in *intPtr_declareInitialize using i loop value" << endl;
    for(i = 0; i < SIZE; i++)
    {
        *intPtr_declareInitialize = i;
        cout << "*intPtr_declareInitialize : " << *intPtr_declareInitialize << ", ";     cout << "intPtr_declareInitialize : " << intPtr_declareInitialize << " and ";   cout << "&intPtr_declareInitialize : " << &intPtr_declareInitialize << endl;        
    }

//    delete []intPtr_declare, []intPtr_declareInitialize;    // error: expected ';' before 'intPtr_declareInitialize'
    delete []intPtr_declare;
    delete []intPtr_declareInitialize;

    cout << "After changes in *intPtr_declare using i loop value" << endl;
    for(i = 0; i < SIZE; i++)
    {
        *intPtr_declare = i;
        cout << "*intPtr_declare : " << *intPtr_declare << ", ";     cout << "intPtr_declare : " << intPtr_declare << " and ";   cout << "&intPtr_declare : " << &intPtr_declare << endl;        
    }

    cout << endl;
    
    cout << "After intPtr_declareInitialize :" << endl;
    for(i = 0; i < SIZE; i++)
    {
        *intPtr_declareInitialize = i;
        cout << "*intPtr_declareInitialize : " << *intPtr_declareInitialize << ", ";     cout << "intPtr_declareInitialize : " << intPtr_declareInitialize << " and ";   cout << "&intPtr_declareInitialize : " << &intPtr_declareInitialize << endl;        
    }

    return 0;
}