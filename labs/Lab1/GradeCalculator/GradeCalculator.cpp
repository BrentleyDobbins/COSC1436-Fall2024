//Story 1

// Lab1
// Breantley Dobbins
// COSC 1436 Fall 2024

#include <iostream>
#include <string>

int main()
{
    //Story 2

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << std::endl;
    
    // Lab Grades
    int lab1;
    int lab2;
    int lab3;
    int lab4;

    std::cout << "Grade for Lab 1: ";
    std::cin >> lab1;
    std::cout << "Grade for Lab 2: ";
    std::cin >> lab2;
    std::cout << "Grade for Lab 3: ";
    std::cin >> lab3;
    std::cout << "Grade for Lab 4: ";
    std::cin >> lab4;
    std::cout << std::endl;
    
    // Exam Grades
    int exam1;
    int exam2;
    int exam3;

    std::cout << "Grade for Exam 1: ";
    std::cin >> exam1;
    std::cout << "Grade for Exam 2: ";
    std::cin >> exam2;
    std::cout << "Grade for Exam 3: ";
    std::cin >> exam3;
    std::cout << std::endl;

    //Story 3

    int labGradeAverage = double (lab1 + lab2 + lab3 + lab4) / 4;
    double result = labGradeAverage;

    std::cout << name;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Lab Grades: " << std::endl;
    std::cout << "Lab 1: " << lab1 << std::endl;
    std::cout << "Lab 2: " << lab2 << std::endl;
    std::cout << "Lab 3: " << lab3 << std::endl;
    std::cout << "Lab 4: " << lab4 << std::endl;
    std::cout << "Lab Grade Average: " << labGradeAverage;
    std::cout << std::endl;
    std::cout << "Exam Grades: " << std::endl;
    std::cout << "Exam 1: " << exam1 << std::endl;
    std::cout << "Exam 2: " << exam2 << std::endl;
    std::cout << "Exam 3: " << exam3 << std::endl;














}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
