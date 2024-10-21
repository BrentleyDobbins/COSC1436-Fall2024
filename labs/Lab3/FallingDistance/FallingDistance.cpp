// Lab 3
// Brentley Dobbins
// COSC 1436 - Fall 2024

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int fallingTime;
    cout << "Enter the number of seconds: ";
    cin >> fallingTime;
    while (fallingTime < 1 || fallingTime > 60)
    {
        cout << "ERROR: Must be between 1-60 seconds" << endl;
        cout << "Enter the number of seconds: ";
        cin >> fallingTime;
    }
}
