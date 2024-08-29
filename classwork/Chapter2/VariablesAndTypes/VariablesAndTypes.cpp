#include <iostream>

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

    //Variables - named memory location to store data (to use a variable you must declare it)
    //Decleration - tells computer a variable exists
    //Scope - lifetime of a variable/identifier: Point of decleration to end of block
    //Expression - can be used anywhere an expression is allowed
    //Styling - Name: nouns, Casing: Camel (first word is lower-case and second word is capitalized [e.g. examGrade])
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
    // | short | 2 | +-32767 (integral) |
    // | int | 4 | +- 2 billion (default) |
    // | long | 4 | +- 2 billion | (used more with OperatingSystems for bit masking*)
    // unsigned * | * |(unsigned int/long - Use only if positive values are needed)

    // Floats
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
    double pi = 3.14159F;
    double largeNumber = 10E100;
    char c = 'A'; 
    std::string name = "Bob";
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

}




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
// 
//