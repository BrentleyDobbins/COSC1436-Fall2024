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

        double loanAmount, interestRate, monthlyPayment;

        cout << "Please enter the loan amount: ";
        cin >> loanAmount;

        cout << "Please enter the interest rate (%): ";
        cin >> interestRate;

        do 
        {
            cout << "How much do you want to pay each month? ";
            cin >> monthlyPayment;

            if (monthlyPayment <= 0) 
            {
                cout << "ERROR: Invalid monthly payment" << endl;
            }
        } while (monthlyPayment <= 0);

        interestRate = (interestRate / 100) / 12;

        double balance = loanAmount;
        double interest;
        int month = 0;

        cout << setw(6) << "Month" << setw(12) << "Balance" << setw(12) << "Payment" << setw(12) << "Interest" << setw(15) << "New Balance" << endl;
        cout << string(60, '-') << endl;

        while (balance > 0) 
        {
            month++;
            interest = balance * interestRate;
            double payment = (balance + interest < monthlyPayment) ? balance + interest : monthlyPayment;

            cout << setw(6) << month << setw(12) << fixed << setprecision(2) << "$ " << balance << setw(12) << "$ " << payment << setw(12) << "$ " << interest << setw(15) << "$ " << balance + interest - payment << endl;

            balance = balance + interest - payment;
        }

      
}