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

int main()
{
    //Array is a setof related data
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
