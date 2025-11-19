using namespace std;

#include <iostream>

int main()
{
    int *intPtr_declare = new int;
    cout << "*intPtr_declare : " << *intPtr_declare << ", ";     cout << "intPtr_declare : " << intPtr_declare << " and ";   cout << "&intPtr_declare : " << &intPtr_declare << endl;
    *intPtr_declare = 65365;
    cout << "After changes in *intPtr_declare = 65365;" << endl;
    cout << "*intPtr_declare : " << *intPtr_declare << ", ";     cout << "intPtr_declare : " << intPtr_declare << " and ";   cout << "&intPtr_declare : " << &intPtr_declare << endl;
    
    cout << endl;

    int *intPtr_declareInitialize = new int(803613);
    cout << "*intPtr_declareInitialize : " << *intPtr_declareInitialize << ", ";     cout << "intPtr_declareInitialize : " << intPtr_declareInitialize << " and ";   cout << "&intPtr_declareInitialize : " << &intPtr_declareInitialize << endl;

    cout << endl;

    delete intPtr_declare;
    delete intPtr_declareInitialize;
    cout << "After Pointer variable delete :" << endl;
    cout << "*intPtr_declare : " << *intPtr_declare << ", ";     cout << "intPtr_declare : " << intPtr_declare << " and ";   cout << "&intPtr_declare : " << &intPtr_declare << endl;
    cout << "*intPtr_declareInitialize : " << *intPtr_declareInitialize << ", ";     cout << "intPtr_declareInitialize : " << intPtr_declareInitialize << " and ";   cout << "&intPtr_declareInitialize : " << &intPtr_declareInitialize << endl;

    return 0;
}