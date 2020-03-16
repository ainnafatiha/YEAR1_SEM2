// Specification file for the Mortgage class
#ifndef MORTGAGE_H
#define MORTGAGE_H

class Mortgage
{
private:
   // Private member data
   double loanAmt,      // loan amount
          annIntRate,   // annual interest rate
          moIntRate,    // monthy interest rate
          years;        // length of the loan in years
   int    numPmts;      // number of monthly payments

   // Private member function
   double term() const; // used in calculation of mo. payment

public:
   // Constructor
   Mortgage() 
      { loanAmt = annIntRate = moIntRate = years = numPmts = 0; }

   // Mutators
   void setLoanAmt(double);
   void setRate(double);
   void setYears(double);
	
	// Accessors
   double getMonthly() const;
   double getPayBack() const;
};

#endif