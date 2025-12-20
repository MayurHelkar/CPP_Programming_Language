using namespace std;

#include <iostream>

class Class_declare_charMember{
    char Char = 'Q';

    public:
//    setValue(char Chr) : Char(Chr); // error: only constructors take member initializers
                                    // error: expected '{' at end of input
//    void setValue(char Chr): Char(Chr); // error: bit-field 'void Class_declare_charMember::setValue(char)' has non-integral type 'void (Class_declare_charMember::)(char)'                                 
    void setValue(char Chr){
        Char = Chr;
        cout << "Char : " << Char << " and &Char : " << (void *)&Char << endl;
        cout << "Chr : " << Chr << " and &Chr : " << (void *)&Chr << endl;
    }
    char getValue()
    {
        return Char;
    }
    void display()
    {
        cout << "Initialze inside Class" << endl;
        cout << "Char : " << Char << " and &Char : " << &Char << endl;
    }
} Char;

class Class_declare_intMember{
    int Int = 98452;
    public:
//    setValue(int Itgr) : Int(Itgr); // error: only constructors take member initializers
                                    // error: expected '{' at end of input
//    void setValue(int Itgr): Int(Itgr); // error: bit-field 'void Class_declare_intMember::setValue(int)' has non-integral type 'void (Class_declare_intMember::)(int)'
    void setValue(int Itgr){
        Int = Itgr;
        cout << "Int : " << Int << " and &Int : " << &Int << endl;
        cout << "Itgr : " << Itgr << " and &Itgr : " << &Itgr << endl;
    }
    int getValue(void)
    {
        return Int;
    }
    void display()
    {
        cout << "Initialze inside Class" << endl;
        cout << "Int : " << Int << " and &Int : " << &Int << endl;
    }
} Int;

class Class_declare_floatMember{ 
    float Float = 86.532;
    public:
//    setValue(float Flt): Float(Flt); // error: only constructors take member initializers
//    void setValue(float Flt): Float(Flt); // error: bit-field 'void Class_declare_floatMember::setValue(float)' has non-integral type 'void (Class_declare_floatMember::)(float)'
    void setValue(float Flt){
        Float = Flt;
        cout << "Float : " << Float << " and &Float : " << &Float << endl;
        cout << "Flt : " << Flt << " and &Flt : " << &Flt << endl;
    }
    float getValue()
    {
        return Float;
    }
    void display()
    {
        cout << "Initialze inside Class" << endl;
        cout << "Float : " << Float << " and &Float : " << &Float << endl;
    }
} Float;

class Class_declare_doubleMember{ 
    double Double = 989.45345;
    public:
//    setValue(double Dbl): Double(Dbl); // error: expected '{' at end of input
//    void setValue(double Dbl): Double(Dbl); // error: bit-field 'void Class_declare_doubleMember::setValue(double)' has non-integral type 'void (Class_declare_doubleMember::)(double)'
    void setValue(double Dbl){
        Double = Dbl;
        cout << "Double : " << Double << " and &Double : " << &Double << endl;
        cout << "Dbl : " << Dbl << " and &Dbl : " << &Dbl << endl;
    }
    double getValue()
    {
        return Double;
    }
    void display()
    {
        cout << "Initialze inside Class" << endl;
        cout << "Double : " << Double << " and &Double : " << &Double << endl;
    }
} Double;

int main()
{
    Class_declare_charMember Char;
    Class_declare_intMember Int;
    Class_declare_floatMember Float;
    Class_declare_doubleMember Double;

    Char.display();
    Char.setValue('a');
    cout << "Char Return value : " << Char.getValue() << endl;

    cout << endl;

    Int.display();
    Int.setValue(97453);
    cout << "Int Return value : " << Int.getValue() << endl;
   
    cout << endl;

    Float.display();
    Float.setValue(87.453643);
    cout << "Float Return value : " << Float.getValue() << endl;

    cout << endl;

    Double.display();
    Double.setValue(87.453643);
    cout << "Double Return value : " << Double.getValue() << endl;
     
    return 0;
}