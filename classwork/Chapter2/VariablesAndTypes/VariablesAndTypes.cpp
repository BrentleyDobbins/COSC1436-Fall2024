#include <iostream> //Includes the header file - #include <string> pulls the string file to use strings/ defines string type

//Declares a point as an X and Y value
struct Point
{
    //Declare variables - Known as *fields* (e.g. x field is an x variable inside of a struct)
    int X;
    int Y;
};

//Entry point. Always starts with "int main"
int main()
{
    //Output 1 ("String Literals in between quoutations")
    std::cout << "Hello World" << std::endl;

    //Output 2
    std::cout << "Hello" << " " << "World" << std::endl;

    //Output 3
    std::cout << "Hello";
    std::cout << " ";
    std::cout << "World";
    std::cout << std::endl;

    //Output 4
    std::cout << "Hello\tWorld\n";

    std::cout << "Hello \"Bob\"";

    //File Paths
    std::cout << "C:\\windows\\temp";

    //Variables - named memory location to store data (to use a variable you must declare it) | Has a Type and Value; Name, and Read/Write
    //Decleration - tells computer a variable exists
    //Scope - lifetime of a variable/identifier: Point of decleration to end of block
    //Expression - can be used anywhere an expression is allowed
    //Styling - Name: nouns, Casing: Camel (first word is lower-case and second word is capitalized [e.g. examGrade])
    //Literals - used to store data that can NOT change - Read Only
    // 
    // variable-decl ::= T id [ '=' E] { ',' id [ '=' E ] }* ';'
    //ALWAYS INITIALIZE THE VARIABLES: ASSIGN VALUE TO VARIABLE
    int length;
    length = 0;
    // int length = 0; //Preferred

    std::cout << length;

    //Identifiers
    //int _hours(Y), _1stgrade(Y), 1stgrade(N), first-grade(N)
    int examGrade, hoursWorked;
    //std::cout examGrade -(use tab to pull the recognized identifier)
    // int exam_grade, hours_worked; DONT DO THIS (AKA - Snake Casing)
    
    //Preferred way to initialize a variable, all within one line. USE THIS SYNTAX (Below)
    int realeaseYear = 1900;
    //Declares multiple variables, Only use when the variables are related
    int rating = 3, stars = 5;

    
    // If NOT determined then use string

    //Types
    //  Defines what kind of data is stored, range, size
    // Primitive - understood by the language
    // | TYPE | SIZE | RANGE |  ( To find size of type - sizeof(T/E)
    // | - | - | - |
    // | short | 2 | +-32767 (integral) |(unsigned - +64k)
    // | int | 4 | +- 2 billion (default) | (unsigned - +4billion)
    // | long | 4 | +- 2 billion | (used more with OperatingSystems for bit masking*) (unsigned - +4billion)
    // unsigned * | * |(unsigned short/int/long - Use only if positive values are needed)

    // Floats | E=range
    // | float | 4 | E+- 38 | precision: 5-7 |
    // | double | 8 | E+- 308 | precision: 12-15 (default) |
    //precision - how many places allowed after decimal; Think of round off errors
    
    // Text
    // | char | 1 | -128 to 127 | character (e.g. Letter grades)
    // | std::string | * | text | (Used for arbitrary text)
    // | bool | 1? | true or false |

    short s;
    int i;
    long l;
    unsigned int ui = 3U;
    //double pi = 3.14159F;
    double largeNumber = 10E100;
    char c = 'A'; 
    std::string name = "Bob";  //String is not part of the primitive C++ language
    bool isPassing = true;
    //int isOk = 1; // DONT DO THIS
    int intSize = sizeof(int);

    // Assignment
    // asn_op ::= V = E
    // Must be type compatible
    // Expression of type Vt (Must declare the type)
    // Associativity - Right (starts with value on the right side)
    int shapeLength = 10;
    int shapeWidth = 20;
    int shapeArea;

    shapeArea = shapeLength;  //Only becomes a statement after add ';' before that it is an expression
    shapeWidth = 10;
    //20 = shapeWidth; (THIS IS NOT ALLOWED)
    shapeArea = shapeLength = shapeWidth = 20; 
    // rValue - appears on the right side of assignment(asn) 
    // lValue - appears on the left side of assignment(asn) e.g. Variables 

    // op - operands
    
    //Arithmetic Operators (Does NOT work with strings or booleans)
    // + - * / % (int modulus; only used with intregal types)
    // arith_op ::= Et op Et
    shapeArea = shapeLength * shapeWidth;
    int remainder = 10 % 3; // 1
    int result = 10 / 3; // 3 - fractional point is lost due to it being an integer
    double dresult = 10.0 / 3.0; // 3.333 - use double with decimal points for greater accuracy

    // unary_op ::= + Et | - Et (+ does nothing; - negates the value) (Works with int and floats only)
    int positiveValue = 10;
    int negativeValue = -positiveValue;

    //Scope (decleration of new block within a new block; doesnt get used often)
    // block-statement ::= { S* }
    {
        int newVariable = 10; 
    }
    //std::cout << newVariable (Does not compile due to being outside of designated block)
    //Style Tip - ALWAYS indent once when inside of block

    // String Stuff
    //NOT A PRIMITIVE (Doesnt translate across other language or the old C language)
    std::string message = "Hello";
    message = message + " World";
    message = message + " " + name;

    std::string empty;
    empty = empty + "Hello";

    // += is a combination operator (It works with arithmetic operators too)
    //Combination operators
    // V op= E
    //
    empty += " World"; // empty = empty + " World"

    // C++ is strongly typed; Expressions are typed at point of compulation and can't be changed once it has been compiled
    // Languages are done in two types - Strongly typed or Weakly typed
    int number = 10;
    //number = "20"; this is how a weakly typed language operates. You can change/alternate through types (e.g. Weakly typed language is Java) | Gives compiler error for trying to change type of variable

    //Type inferencing (C++11) | Pre-2011 auto has a different meaning than today
    // auto ::= compiler figures it out (Not Recommended for beginners)
    // Only usable in variable declerations and a few other places
    // Must use an initial expression when declaring the variable

    auto payRate = 45.6; // double payRate = 45.6; (The compiler figures it out instead of you having to assign type)
    //payRate = "45.6"; (Compiler Error - Can't change assigned type)
    double averagePayRate = 40 / payRate;

    //Literals 
    // Used for values that never change
    // There is a hybrid that can be utilized
    // Area of a circle = Pi*r^2
    const double pi = 3.14159;
    double radius = 10;

    // Literals are great unless you need them everywhere (constant-expression) (const)
    // 4+5 * 8 = 44 (e.g. Of a constant expression)
    // Variables are better for reuse but may end up being accidentally changed
    //Const (constant expression) with name, type and value and read only, primitive
    double area = 3.14159 * radius * radius;
    area = pi * radius * radius;
    //pi = 10; // Error

    // Structue - a group of related data points (struct)
    // Cannot use structs with cout
    // Struct variables are undefined; Must assign the value
    //Prompt user for a point
    //int x, y;
    //Point pt;
    Point pt = {0}; //Zero initializes fields //pt.X = 0; pt.Y = 0;
    std::cout << "Enter X value";
    pt.X = 5;
    std::cout << "Enter Y value";
    pt.Y = 10;

    //(5, 10)
    std::cout << "(" << pt.X << ", " << pt.Y << ")";

    //Struct assignment is value assignment, all fields are copied
    Point pt2 = pt;

}



struct point2
{
    int x;
    int y;
};


// S:: = Single Statement (Does Something) (Statements end with ";")
// E:: = Single Expression (Calculates Value) (Turns into a statement if ended with ";")
// S|E:: = Statement or Expression
// S*:: = Zero or more statement
// E+:: = One or more Expression
// T:: = Type
// [S]:: = Optional
// std:: endl (used to create a new line/end current line)
// "\n" is an escape sequence, within string literals it creates a new line
// "\t" is a horizontal tab, no control over the spacing
// \" \" = used for qutations within a string statement
// "\\" = used for one "\"
// "R" before a file path ignores escape sequence (std::cout << R"C:\\window\\temp";)
//id rules - start w/ letter, underscore; Consists of letters, digits, and underscores (NO SPACES/DASHES/DOTS) May NOT use keywords!
// All expressions have a Type and Value - 
// Constant Expression(const)  = expression that is calculated at compile time, primitive (They sit between expresssions and variables; Name like variables but ONLY read like literals)