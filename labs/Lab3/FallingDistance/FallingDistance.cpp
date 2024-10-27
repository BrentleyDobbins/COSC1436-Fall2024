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

    char units;
    cout << "What unit you want the results in meter or feet? (m or f): ";
    cin >> units;
    while (units != 'm' && units != 'f')
    {
        cout << "ERROR: Unit must m for meter or f for feet " << endl;
        cout << "What unit you want the results in meter or feet? (m or f): ";
        cin >> units;
    }

    cout << "Seconds" << setw(3) << " " << "Distance" << endl;
    cout << setw(20) << setfill('=') << "" << setfill(' ') << endl;

    double fallingDistance;
    for (int i = 1; i <= fallingTime; i++)
    {
        double g = 9.8;
        fallingDistance = 0.5 * g * (pow(i, 2));
        if (units == 'f')
        {
            fallingDistance *= 3.28084;
        }
        cout << i << setw(9) << " " << fixed << setprecision(1) << fallingDistance << " " << units << endl;
    };
}
