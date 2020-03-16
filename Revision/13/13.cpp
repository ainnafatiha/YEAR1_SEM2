// Chapte 13, Programming Challenge 13: Mortgage Payments
#include <iostream>
#include <iomanip>
#include "Mortgage.h"
using namespace std;

int main()
{
   double loan,         // Amount of the loan
          annIntRate,   // Annual interest rate
          years;        // Length of the loan in years
   Mortgage account;    // Create a Mortgage object.

	// Get the loan amount.
   cout << "Enter the amount of the loan: ";
   cin  >> loan;
	
	// Validate it.
   while (loan < 0)
   {  cout << "Loan amount must be 0 or more. Please re-enter: ";
      cin  >> loan;
   }

	// Get the annual interest rate.
   cout << "Enter the annual interest rate in decimal form (example .075): ";
   cin  >> annIntRate; 
	
	// Validate it.
   while (annIntRate < 0)
   {  cout << "Interest rate must be 0 or more. Please re-enter: ";
      cin  >> annIntRate;
   }
	
	// Get the length of the loan.
   cout << "Enter the length of the loan in years: ";
   cin  >> years; 
	
	// Validate it.
   while (years < 0)
   {  cout << "Years must be 0 or more. Please re-enter: ";
      cin  >> years;
   }

	// Process the data.
   account.setLoanAmt(loan);          // sets amount of the loan
   account.setRate(annIntRate);       // sets annual interest rate
   account.setYears(years);           // sets length of the loan in years
   
   // Display payment information
   cout <<fixed << showpoint << setprecision(2);
   cout << "\nMonthly Payment: $" << account.getMonthly() << endl;
   cout << "Total Pay Back: $"  << account.getPayBack() << endl << endl;

   return 0;
}