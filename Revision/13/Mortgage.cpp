// Implementation file for the Mortgage class
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Mortgage.h"
using namespace std;

//***************************************
// getMonthly member function           *
//***************************************

double Mortgage::getMonthly() const
{
   if (moIntRate == 0.0)
      return loanAmt / numPmts;
   else
      return (loanAmt * (moIntRate) * term()) / (term() - 1);
}

//***************************************
// term member function                 *
//***************************************

double Mortgage::term() const
{
   return pow(1 + (moIntRate), numPmts);
}

//***************************************
// getPayBack member function           *
//***************************************

double Mortgage::getPayBack() const
{
   return (getMonthly() * numPmts);
}

//***************************************
// setLoanAmt member function           *
//***************************************

void Mortgage::setLoanAmt(double amt)
{
   if (amt < 0)
   {
      cout << "Invalid loan amount.\n";
      exit(EXIT_FAILURE);
   }
   
   loanAmt = amt;
}

//***************************************
// setRate member function              *
//***************************************

void Mortgage::setRate(double rate)
{
   if (rate < 0)
   {
      cout << "Invalid interest rate.\n";
      exit(EXIT_FAILURE);
   }
   
   annIntRate = rate;
   moIntRate = rate/12;
}

//***************************************
// setYears member function             *
//***************************************

void Mortgage::setYears(double yrs)
{
   if (yrs < 0)
   {
      cout << "Invalid number of years.\n";
      exit(EXIT_FAILURE);
   }

   years = yrs;
   numPmts = yrs * 12;
}