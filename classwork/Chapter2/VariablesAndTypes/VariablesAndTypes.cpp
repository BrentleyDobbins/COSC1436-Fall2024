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
    //ALWAYS INITIALIZE THE VARIABLES: ASSIGN VALUE TO VARIABLE
    int length;
    length = 0;
    
    //Preferred way to initialize a variable, all within one line. USE THIS SYNTAX (Below)
    int realeaseYear = 1900;
    //Declares multiple variables, Only use when the variables are related
    int rating = 3, stars = 5;

    
    std::cout << length;
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