
#include <iostream>
#include <string>
#include <cmath>   //C math funtions
#include <iomanip> //Formatted Output


//Include the std namespace so we dont have to prefix it on everything
using namespace std;
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



    // Type-Casting: you convert an expression to another type explicitly
    // (T)E => C-style Casting, NOT RECOMMENDED

    int totalSales = 50000;
    int departments = 8;

    // static_cast<T>(E)  => PREFERRED APPROACH/ALWAYS DO IT THIS WAY!
    //  Must be allowable
    double averageSalesPerDepartment = static_cast<double>(totalSales) / departments; //Static Cast
    double averageSalesPerDepatment = totalSales / (double)departments; // C-Style

    //Compiler error, can NOT convert a string to int
    std::string someString = "Hello";
    //int someStringNumber = static_cast<int>(someString);
    //int someStringNumber = (int)someString

    //Use cast to truncated data w/o compiler warning
    int truncatedValue = static_cast<int>(floatValue);


    //Math Functions:
    // pow(x, y) => x to the y power
    // sqrt(x) => square root of x
    // exp(x) => e to the x power
    // log(x) => log of x log(exp(x)) = x
    // sin(x), cos(x), tan(x), cot(x), sec(x), csc(x), ...h
    // abs(x) => positive value of x
    // ceil(x) => smallest possible int value >= x
    // floor(x) => largest possible int value <= x
    // trunc(x) => rounds towards zero
    // round(x) => rounds to the nearest integer (mid-point rounding)

    double xValue = 45.6;
    double mathResult;

    std::cout << pow(xValue, 2) << std::endl;   //Same as xValue * xValue
    std::cout << sqrt(xValue) << std::endl;
    std::cout << exp(2) << std::endl;           //e nth power, e = 2.718
    std::cout << log(5.4) << std::endl;         //root of e

    std::cout << abs(-45) << std::endl;         //positive x = 45

    std::cout << ceil(xValue) << std::endl;     // 46
    std::cout << floor(xValue) << std::endl;    // 45

    std::cout << trunc(xValue) << std::endl;    // 45
    std::cout << round(xValue) << std::endl;    // 46


    //Formatted Output: 

    std::cout << 4.567891241415151 << std::endl;
    std::cout << 5.67e3 << std::endl;

    //Create a table 
    // Manipulator     |         Behavior            |     Persist 
    //   setw(i)       | pads the value to i         | Does NOT persist 
    //   left          |   Left justifies            | Yes
    //   right         |   Right justifies           | Yes   (Default)
    //   fixed         | Forces fixed point notation | Yes
    // setprecision(i) | Sets precision of floats to total digits if fixed and decimal digits if fixed | Yes
    //   setfill(c)    |    Character to pad with    | Yes 
    // //

     
    cout << std::left << std::setw(8) << "Student" << setw(6) << "Grade " << setw(6) << "Letter " << std::endl;
    cout << setw(20) << setfill('-') << "" << setfill(' ') << std::endl;
    cout << fixed << setprecision(2);
    cout << std::setw(8) << "Bob" << setw(6) << 95.67  << setw(6) << "A" << endl;
    cout << std::setw(8) << "Sue" << setw(6) << 98.543 << setw(6) << "A" << endl;
    cout << std::setw(8) << "Jim" << setw(6) << 84.567 << setw(6) << "B" << endl;
    cout << std::setw(8) << "Jan" << setw(6) << 78.987 << setw(6) << "C" << endl;


}



//Use rectangular selecting for quicker editing