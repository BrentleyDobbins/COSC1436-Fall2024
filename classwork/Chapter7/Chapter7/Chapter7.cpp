#include <iostream>
#include <string>
#include <iomanip>

struct Point
{
    int x;
    int y;
};

struct Rectangle
{
    Point topLeft;
    Point bottomRight;
};

void Display(Point point)
{
    std::cout << "(" << point.x << "," << point.y << ")";
};

void Display(Rectangle rect)
{
    //std::cout << "(" << rect.topLeft.x << "," << rect.topLeft.y << ")";
    std::cout << "(";
    Display(rect.topLeft);
    std::cout << " ";
    Display(rect.bottomRight);
    std::cout << ")" << std::endl;
};

void Translate(Rectangle& rect, int offsetX, int offsetY)
{
    rect.topLeft.x += offsetX;
    rect.bottomRight.x += offsetX;
    rect.topLeft.y += offsetY;
    rect.bottomRight.y += offsetY;
};

void TestPassByReference()
{
    Rectangle rc;
    rc.topLeft.x = 10;
    rc.topLeft.y = 20;

    rc.bottomRight.x = 100;
    rc.bottomRight.y = 75;
    Display(rc);

    Translate(rc, 5, 10);
    Display(rc);
}

void GradeArrayDemo() //Utilize this for the Lab!!!
{
    const int MaxGrades = 20;
    double dummyValue2 = -1;
    int grades[MaxGrades];
    double dummyValue = 0;

    int estimatedMaxArraySize = //Size of array / size of element
        sizeof(grades) / sizeof(int); //Must be used within the same function/scope; works with local variables but not ideal

    int count = 0;
    for (int index = 0; index < MaxGrades; ++index)//, ++count)
    {
        std::cout << "Enter a grade: ";
        std::cin >> grades[index];
        //grades[index] = 100;

        if (grades[index] <= 0)
            break;

        ++count;
    };

    //for (int index = 0; index < MaxGrades; ++index)
    for (int index = 0; index < count; ++index)
    {
        std::cout << grades[index] << std::endl;
    };

    int indexToChange;
    do
    {
        std::cout << "Enter the index of the grade to change: ";
        std::cin >> indexToChange;
    } while (indexToChange < 0 || indexToChange >= MaxGrades);

        int newGrade;
        std::cout << "Enter the new grade: ";
        std::cin >> newGrade;

        grades[indexToChange] = newGrade;

    
};

void InitArrayDemo()
{
    int MaxRates = 100;
    double payRates[MaxRates] = {0}; //Zero intialized with = {0}

    //Zero initialize
    ////for (int index = 0; index < MaxRates; ++index)
    //////  payRates[index] = 0;
};

int main()
{
    InitArrayDemo();
}

void NameArrayDemo()
{
    //Array is a set of related data
    /*std::string student1;
    std::string student2;
    std::string student3;
    std::string student4;
    std::string student5;*/
    const int MaxStudents = 100;
    std::string students[MaxStudents];

    //Store roster of students
    // When using for loop use = 0 to < N
    for (int index = 0; index < MaxStudents; ++index)
    {
        std::string student;
        std::cout << "Enter student name: ";
        getline(std::cin, student);
        if (student == "")
            break;

        // student at index 0; AKA the first element of the array
        // students sub 0 (in the student array the element at 0)
        // Array access operator (used to access elements of an array; always the type of the array)
        students[index] = student;
    };

    //Print roster
    for (int index = 0; index < MaxStudents; ++index)
    {
        if (students[index] != "")
            std::cout << students[index] << std::endl;
    };
}
