using namespace std;

#include <iostream>

class Class_declare_charMember{
//    protected:
    public :
    char Char; } Char;

class Class_declare_intMember{
//    protected:
    public : 
    int Int; } Int;

class Class_declare_floatMember{ 
//    protected:
    public : 
    float Float; } Float;

class Class_declare_doubleMember{ 
//    protected:
    public : 
    double Double; } Double;

int main()
{
    cout << "Class_declare_charMember :" << endl;
    cout << "Class_declare_intMember Size : " << sizeof(Class_declare_intMember) << endl;
    cout << "Char Size : " << sizeof(Char) << endl;
    cout << "&Char Size : " << sizeof(&Char) << endl;
//    cout << "Char.Char Size : " << sizeof(Char.Char) << endl; // error: 'char Class_declare_charMember::Char' is private within this context
//    cout << "&Char.Char Size : " << sizeof(&Char.Char) << endl; // error: 'char Class_declare_charMember::Char' is private within this context
//    cout << "Char.Char Size : " << sizeof(Char.Char) << endl; // error: 'char Class_declare_charMember::Char' is private within this context
//    cout << "&Char.Char Size : " << sizeof(&Char.Char) << endl; // error: 'char Class_declare_charMember::Char' is private within this context
    cout << "Char.Char Size : " << sizeof(Char.Char) << endl;
    cout << "&Char.Char Size : " << sizeof(&Char.Char) << endl;
//    cout << "Char Value : " << Char << endl; // error: no type named 'type' in 'struct std::enable_if<false, void>'
    cout << "Char Address : " << &Char << endl;
//    cout << "Char.Char Value : " << Char.Char << endl; // error: 'char Class_declare_charMember::Char' is private within this context
//    cout << "Char.Char Address : " << &Char.Char << endl; // error: 'char Class_declare_charMember::Char' is private within this context
//    cout << "Char.Char Value : " << Char.Char << endl; // error: 'char Class_declare_charMember::Char' is private within this context
//    cout << "Char.Char Address : " << &Char.Char << endl; // error: 'char Class_declare_charMember::Char' is private within this context
    cout << "Char.Char Value : " << Char.Char << endl;
    cout << "Char.Char Address : " << &Char.Char << endl;

    cout << endl;

    cout << "Class_declare_intMember :" << endl;
    cout << "Class_declare_intMember Size : " << sizeof(Class_declare_intMember) << endl;
    cout << "Int Size : " << sizeof(Int) << endl;
    cout << "&Int Size : " << sizeof(&Int) << endl;
//    cout << "Int.Int Size : " << sizeof(Int.Int) << endl; // error: 'Int Class_declare_IntMember::Int' is private within this context
//    cout << "&Int.Int Size : " << sizeof(&Int.Int) << endl; // error: 'Int Class_declare_IntMember::Int' is private within this context
//    cout << "Int.Int Size : " << sizeof(Int.Int) << endl; // error: 'Int Class_declare_IntMember::Int' is private within this context
//    cout << "&Int.Int Size : " << sizeof(&Int.Int) << endl; // error: 'Int Class_declare_IntMember::Int' is private within this context
    cout << "Int.Int Size : " << sizeof(Int.Int) << endl;
    cout << "&Int.Int Size : " << sizeof(&Int.Int) << endl;
//    cout << "Int Value : " << Int << endl; // error: no type named 'type' in 'struct std::enable_if<false, void>'
    cout << "Int Address : " << &Int << endl;
//    cout << "Int.Int Value : " << Int.Int << endl; // error: 'Int Class_declare_IntMember::Int' is private within this context
//    cout << "Int.Int Address : " << &Int.Int << endl; // error: 'Int Class_declare_IntMember::Int' is private within this context
//    cout << "Int.Int Value : " << Int.Int << endl; // error: 'Int Class_declare_IntMember::Int' is private within this context
//    cout << "Int.Int Address : " << &Int.Int << endl; // error: 'Int Class_declare_IntMember::Int' is private within this context
    cout << "Int.Int Value : " << Int.Int << endl;
    cout << "Int.Int Address : " << &Int.Int << endl;

    cout << endl;

    cout << "Class_declare_floatMember :" << endl;
    cout << "Class_declare_intMember Size : " << sizeof(Class_declare_intMember) << endl;
    cout << "Float Size : " << sizeof(Float) << endl;
    cout << "&Float Size : " << sizeof(&Float) << endl;
//    cout << "Float.Float Size : " << sizeof(Float.Float) << endl; // error: 'Float Class_declare_FloatMember::Float' is private within this context
//    cout << "&Float.Float Size : " << sizeof(&Float.Float) << endl; // error: 'Float Class_declare_FloatMember::Float' is private within this context
//    cout << "Float.Float Size : " << sizeof(Float.Float) << endl; // error: 'Float Class_declare_FloatMember::Float' is private within this context
//    cout << "&Float.Float Size : " << sizeof(&Float.Float) << endl; // error: 'Float Class_declare_FloatMember::Float' is private within this context
    cout << "Float.Float Size : " << sizeof(Float.Float) << endl;
    cout << "&Float.Float Size : " << sizeof(&Float.Float) << endl;
//    cout << "Float Value : " << Float << endl; // error: no type named 'type' in 'struct std::enable_if<false, void>'
    cout << "Float Address : " << &Float << endl;
//    cout << "Float.Float Value : " << Float.Float << endl; // error: 'Float Class_declare_FloatMember::Float' is private within this context
//    cout << "Float.Float Address : " << &Float.Float << endl; // error: 'Float Class_declare_FloatMember::Float' is private within this context
//    cout << "Float.Float Value : " << Float.Float << endl; // error: 'Float Class_declare_FloatMember::Float' is private within this context
//    cout << "Float.Float Address : " << &Float.Float << endl; // error: 'Float Class_declare_FloatMember::Float' is private within this context
    cout << "Float.Float Value : " << Float.Float << endl;
    cout << "Float.Float Address : " << &Float.Float << endl;

    cout << endl;

    cout << "Class_declare_doubleMember :" << endl;
    cout << "Class_declare_intMember Size : " << sizeof(Class_declare_intMember) << endl;
    cout << "Double Size : " << sizeof(Double) << endl;
    cout << "&Double Size : " << sizeof(&Double) << endl;
//    cout << "Double.Double Size : " << sizeof(Double.Double) << endl; // error: 'Double Class_declare_DoubleMember::Double' is private within this context
//    cout << "&Double.Double Size : " << sizeof(&Double.Double) << endl; // error: 'Double Class_declare_DoubleMember::Double' is private within this context
//    cout << "Double.Double Size : " << sizeof(Double.Double) << endl; // error: 'Double Class_declare_DoubleMember::Double' is private within this context
//    cout << "&Double.Double Size : " << sizeof(&Double.Double) << endl; // error: 'Double Class_declare_DoubleMember::Double' is private within this context
    cout << "Double.Double Size : " << sizeof(Double.Double) << endl;
    cout << "&Double.Double Size : " << sizeof(&Double.Double) << endl;
//    cout << "Double Value : " << Double << endl; // error: no type named 'type' in 'struct std::enable_if<false, void>'
    cout << "Double Address : " << &Double << endl;
//    cout << "Double.Double Value : " << Double.Double << endl; // error: 'Double Class_declare_DoubleMember::Double' is private within this context
//    cout << "Double.Double Address : " << &Double.Double << endl; // error: 'Double Class_declare_DoubleMember::Double' is private within this context
//    cout << "Double.Double Value : " << Double.Double << endl; // error: 'Double Class_declare_DoubleMember::Double' is private within this context
//    cout << "Double.Double Address : " << &Double.Double << endl; // error: 'Double Class_declare_DoubleMember::Double' is private within this context
    cout << "Double.Double Value : " << Double.Double << endl;
    cout << "Double.Double Address : " << &Double.Double << endl;
    
    return 0;
}