//Story 1

// Lab1
// Brentley Dobbins
// COSC 1436 Fall 2024

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //Story 2

    string name;
    cout << "Enter your name: ";
    getline(std::cin, name);
    cout << endl;
    
    // Lab Grades
    int lab1;
    int lab2;
    int lab3;
    int lab4;

    cout << "Enter grade for Lab 1: ";
    cin >> lab1;
    cout << "Enter grade for Lab 2: ";
    cin >> lab2;
    cout << "Enter grade for Lab 3: ";
    cin >> lab3;
    cout << "Enter grade for Lab 4: ";
    cin >> lab4;
    cout << std::endl;
    
    // Exam Grades
    int exam1;
    int exam2;
    int exam3;

    cout << "Enter grade for Exam 1: ";
    cin >> exam1;
    cout << "Enter grade for Exam 2: ";
    cin >> exam2;
    cout << "Enter grade for Exam 3: ";
    cin >> exam3;
    cout << std::endl;

    // Other Grades - Story 6
    int participation;
    int finalExam;

    cout << "Enter grade for Participation: ";
    cin >> participation;
    cout << "Enter grade for Final Exam: ";
    cin >> finalExam;


    //Story 3

    
    
    cout << name;
    cout << endl;
    cout << endl;
    cout << name << ", your lab grades are: " << endl;
    cout << "Lab 1: " << lab1 << endl;
    cout << "Lab 2: " << lab2 << endl;
    cout << "Lab 3: " << lab3 << endl;
    cout << "Lab 4: " << lab4 << endl;
    cout << endl;

    //Story 4

    

    cout << name << ", your exam grades are: " << endl;
    cout << "Exam 1: " << exam1 << endl;
    cout << "Exam 2: " << exam2 << endl;
    cout << "Exam 3: " << exam3 << endl;
    cout << endl;

    cout << name << ", your other grades are: " << endl;
    cout << "Participation: " << participation << endl;
    cout << "Final Exam: " << finalExam << endl;
    cout << endl;

    //Story 5

    double labGradeAverage = static_cast<double>(lab1 + lab2 + lab3 + lab4) / 4;
    double examGradeAverage = static_cast<double>(exam1 + exam2 + exam3) / 3;
    double participationGrade = static_cast<double>(participation);
    double finalExamGrade = static_cast<double>(finalExam);
    double classAverage = (labGradeAverage * .65) + (examGradeAverage * .20) + (participationGrade * .05) + (finalExamGrade * .10);

    cout << name << ", your class grades: ";
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Lab Grade Average(65%): " << labGradeAverage << "%" << endl;
    cout << "Exam Grade Average(20%): " << examGradeAverage << "%" << endl;
    cout << "Participation Grade(5%): " << participationGrade << "%" << endl;
    cout << "Final Exam Grade(10%): " << finalExamGrade << "%" << endl;
    cout << endl;
    cout << "Class Average: " << classAverage << "%" << endl;

   

}

