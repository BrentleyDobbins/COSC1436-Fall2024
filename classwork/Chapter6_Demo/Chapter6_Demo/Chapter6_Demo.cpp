#include <iostream>

// N! - 1 * 2 * ... * N (needs to be an integer)
int Factorial( int number )
{
    int result = 1;

    for (int index = 0; index < number; ++index)
        result *= (index + 1);

    return result;
}

int Factorial2(int number)
{
    if (number <= 1)
        return 1;

    return number * Factorial2(number - 1);
}

void PrefixPostfixDemo()
{
    int value;
    std::cout << "Enter a value: ";
    std::cin >> value;
    
    // prefix inc := ++x => X = X + 1; X
    // postfix inc := x++ => T = X; X = X + 1; T
    // prefix dec := --x => X = X - 1; X
    // postfix dec := x-- => T = X; X = X - 1; T
    std::cout << value++ << " "; 
    std::cout << ++value << " "; 
    std::cout << value-- << " "; 
    std::cout << --value << " " << std::endl;
}

void DisplayTruthTable()
{
    std::cout << " A " << " B " << " && " << " || " << std::endl;
    
    //False, False
    //False, True
    //True, False
    //True, True
    //Conditonal ::= Eb ? Et : Ef
    std::cout << false << false << " " << (false && false ? "true" : "false") << " " << (false || false ? "true" : "false") << std::endl;
    std::cout << false << true << " " << (false && true ? "true" : "false") << " " << (false || true ? "true" : "false") << std::endl;
    std::cout << true << false << " " << (true && false ? "true" : "false") << " " << (true || false ? "true" : "false") << std::endl;
    std::cout << true << true << " " << (true && true ? "true" : "false") << " " << (true || true ? "true" : "false") << std::endl;
}

bool isDigit(char value)
{
    switch (value)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9': return true;

    };

    return false;
};

bool isLetter(char value)
{
    if ((value >= 'A' && value <= 'Z') || (value >= 'a' && value <= 'z'))
        return true;

    return false;
};

std::string GetCharacterClass(char value)
{
    //Identify the char
    // a..z
    // 0..9
    // * = symbol
    if (isDigit(value))
        return "Digit";
    else if (isLetter(value))
        return "Letter";
    else
        return "Symbol";

}

void SwitchDemo()
{
    do
    {
        char input;
        std::cout << "Enter a character: ";
        std::cin >> input;

        std::cout << GetCharacterClass(input) << std::endl;
    } while (true);
}



int main()
{
    //std::cout << Factorial(3) << " " << Factorial2(3) << std::endl;
    //std::cout << Factorial(5) << " " << Factorial2(5) << std::endl;
    //std::cout << Factorial(1) << " " << Factorial2(1) << std::endl;
    //DisplayTruthTable();
    //PrefixPostfixDemo();
    //SwitchDemo();
}

