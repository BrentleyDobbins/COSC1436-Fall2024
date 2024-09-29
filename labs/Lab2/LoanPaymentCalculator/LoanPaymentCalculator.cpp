/* Lab 2 - Loan Payment Calculator
*  Brentley Dobbins
*  COSC 1436 Fall 2024
*/


#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
    //Prompt user for initial loan value. Must be between $1 - $1000 to be valid

    int loanAmount;

    cout << "Enter loan amount ($1-$1000): ";
    cin >> loanAmount;

    if (loanAmount < 0 || loanAmount > 1000)
        cout << "ERROR: Loan amount must be betwwen $1-$1000";



}
