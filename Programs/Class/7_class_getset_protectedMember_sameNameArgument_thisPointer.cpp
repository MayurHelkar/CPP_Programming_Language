using namespace std;

#include <iostream>

class Class_declare_charMember{
    protected :
    char Char = 'Q';

    public:
//    setValue(char Char) : Char(Char); // error: only constructors take member initializers
                                    // error: expected '{' at end of input
//    void setValue(char Char): Char(Char); // error: bit-field 'void Class_declare_charMember::setValue(char)' has non-integral type 'void (Class_declare_charMember::)(char)'                                 
    void setValue(char Char){
        this->Char = Char;
        cout << "this->Char : " << this->Char << " and &this->Char : " << (void *)&this->Char << endl;
        cout << "Char : " << Char << " and &Char : " << (void *)&Char << endl;
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
    protected :
    int Int = 98452;

    public:
//    setValue(int Int) : Int(Int); // error: only constructors take member initializers
                                    // error: expected '{' at end of input
//    void setValue(int Int): Int(Int); // error: bit-field 'void Class_declare_intMember::setValue(int)' has non-integral type 'void (Class_declare_intMember::)(int)'
    void setValue(int Int){
        this->Int = Int;
        cout << "this->Int : " << this->Int << " and &this->Int : " << &this->Int << endl;
        cout << "Int : " << Int << " and &Int : " << &Int << endl;
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
    protected :
    float Float = 86.532;

    public:
//    setValue(float Float): Float(Float); // error: only constructors take member initializers
//    void setValue(float Float): Float(Float); // error: bit-field 'void Class_declare_floatMember::setValue(float)' has non-integral type 'void (Class_declare_floatMember::)(float)'
    void setValue(float Float){
        this->Float = Float;
        cout << "this->Float : " << this->Float << " and &this->Float : " << &this->Float << endl;
        cout << "Float : " << Float << " and &Float : " << &Float << endl;
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
    protected :
    double Double = 989.45345;
    
    public:
//    setValue(double Double): Double(Double); // error: only constructors take member initializers
                                               // error: expected '{' at end of input
//    void setValue(double Double): Double(Double); // error: bit-field 'void Class_declare_doubleMember::setValue(double)' has non-integral type 'void (Class_declare_doubleMember::)(double)'
    void setValue(double Double){
        this->Double = Double;
        cout << "this->Double : " << this->Double << " and &this->Double : " << &this->Double << endl;
        cout << "Double : " << Double << " and &Double : " << &Double << endl;
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