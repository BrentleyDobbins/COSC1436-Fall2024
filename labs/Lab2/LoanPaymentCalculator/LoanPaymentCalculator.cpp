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
    
    float loanAmount;
    float interestRate;
    float monthlyPayment;
    

    cout << "Enter loan amount (1-1000): ";
    cin >> loanAmount;

    if (loanAmount < 0 || loanAmount > 1000)
    {
        cout << "ERROR: Loan amount must be betwwen 1-1000" << endl;

        cout << "Enter loan amount (1-1000): ";
        cin >> loanAmount;
    };

    cout << "Enter interest rate (%): ";
    cin >> interestRate;

    if (interestRate < 1 || interestRate > 100)
    {
        cout << "ERROR: Interest rate must be between 1-100" << endl;

        cout << "Enter interest rate (%): ";
        cin >> interestRate;

    };

    cout << "How much do you want to pay each month? ";
    cin >> monthlyPayment;

    if (monthlyPayment < 0 || monthlyPayment > loanAmount)
    {
        cout << "ERROR: Must be a valid payment amount (Between 0 and Loan amount)";
        cout << "How much do you want to pay each month? ";
        cin >> monthlyPayment;

    };

    

    cout << "Month" << setw(12) << "Balance" << setw(14) << "Payment" << setw(14) << "Interest" << setw(18) << "New Balance" << endl;
    cout << setw(70) << setfill('-') << "" << setfill(' ') << endl;
    for (int months = 1; months < 13; ++months)
    {
        float interest = loanAmount * (interestRate / 100);
        float newBalance = loanAmount - monthlyPayment + interest;

        cout << months << setw(12) << "$ " << loanAmount << setw(14) << "$ " << monthlyPayment << setw(14) << "$ " << interest << setw(18) << "$ " << newBalance << endl;
        cout <<  endl;
    };
    

    
    
    // |  Month  |  Balance  |  Payment  |  Interest  |  New Balance  |
    

}
