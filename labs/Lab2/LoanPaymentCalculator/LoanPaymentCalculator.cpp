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
    
    double currentBalance;
    double inputInterest;
    double payAmount;
    int month = 0;
    

    cout << "Enter loan amount (1-1000): ";
    cin >> currentBalance;

    if (currentBalance < 0 || currentBalance > 1000)
    {
        cout << "ERROR: Loan amount must be betwwen 1-1000" << endl;

        cout << "Enter loan amount (1-1000): ";
        cin >> currentBalance;
    };

    cout << "Enter interest rate (%): ";
    cin >> inputInterest;

    if (inputInterest < 1 || inputInterest > 100)
    {
        cout << "ERROR: Interest rate must be between 1-100" << endl;

        cout << "Enter interest rate (%): ";
        cin >> inputInterest;

    };

    cout << "How much do you want to pay each month? ";
    cin >> payAmount;

    if (payAmount < 0 || payAmount > currentBalance)
    {
        cout << "ERROR: Must be a valid payment amount (Between 0 and Loan amount)";
        cout << "How much do you want to pay each month? ";
        cin >> payAmount;

    };

    
    cout << "Month" << setw(12) << "Balance" << setw(14) << "Payment" << setw(14) << "Interest" << setw(18) << "New Balance" << endl;
    cout << setw(70) << setfill('-') << "" << setfill(' ') << endl;

    double interestRate = (inputInterest / 100);

    while (currentBalance > 0)
    {
        currentBalance -= payAmount;
        double interest = currentBalance * interestRate;
        currentBalance += interest;
        if (currentBalance < payAmount)
            currentBalance = currentBalance - currentBalance;

        if (currentBalance <= 0)
            break;

        cout << ++month << setw(12) << currentBalance << setw(14) << payAmount << setw(14) << interest << setw(18) << currentBalance << endl;

    };
    
    // |  Month  |  Balance  |  Payment  |  Interest  |  New Balance  |
    

}
