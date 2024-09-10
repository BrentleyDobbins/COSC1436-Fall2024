
#include <iostream>
#include <string>


int main()
{
    //Get user's name
    std::string name;
    std::cout << "Enter your name: ";

    // std::cin >> V
    // Inserts value up to first whitespace into variable
    // Doesn't work with spaced strings
    //std::cin >> name;
    std::getline(std::cin, name);

    std::cout << "Hello " << name << std::endl;
    
    // Use double for inputs with decimals/fractions
    int hours;
    std::cout << "How many hours did you work this week? ";
    std::cin >> hours;

    double payRate;
    std::cout << "How much do you earn an hour? ";
    std::cin >> payRate;

    std::cout << "You earned $" << (hours * payRate) << " this week" << std::endl;

    // Multi-value input, values are whitespace seperated
    int x, y;
    std::cout << "Enter the X, Y values of a point: ";
    std::cin >> x >> y;

    //Type Coercion - Compiler changes type of expression
    // NO impact on runtime code generation
    // ALWAYS SAFE
    // Only impacts current expression
    // Type hierarchy: picks larger of two operand types (Its about the range of the values)
    // - double 
    // - float
    // - unsigned long
    // - long 
    // - unsigned int
    // - int
    // - char/short/unsigned short (automatic to int)

    // double = int * double
    // double = double * double (Type Coercion)
    // double = double
    double result = hours * payRate;

    //Precedence rules don't apply, just find the largest type
    // double + float * int => double (Due to double bing the biggest type in the espression)

    //Assignment doesn't matter, types determined on each side of operator
    // double = int * float

    //Overflow and Underflow
    //Overflow happens when the value is too big for the type
    //Underflow happens when the value is too small for the type
    short smallValue = 32767 + 1; //Overflow
    std::cout << smallValue << std::endl;

    short largeValue = -32768 - 1; //Underflow
    std::cout << largeValue << std::endl;

    float floatValue = 1e38 + 2e20; // output = inf 
    std::cout << floatValue << std::endl;






}


