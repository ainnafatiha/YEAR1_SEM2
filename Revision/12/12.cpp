#include <iostream>
#include <iomanip>
#include "Payroll.h"
#include "Payroll.cpp1"

using namespace std;

// Constant for number of employees
const int NUM_EMPLOYEES = 7;

int main()
{
   double hours;   // Hours worked
   double rate;    // Hourly pay rate
   int count;      // Loop counter
   
   // Array of Payroll objects
   Payroll employees[NUM_EMPLOYEES];

   // Get the hours worked and the pay rate
   // for each employee.
   cout << "Enter the hours worked and pay rate "
        << "for " << NUM_EMPLOYEES << " employees:\n";

   for (count = 0; count < NUM_EMPLOYEES; count++)
   {
      // Get the employee's pay rate.
      cout << "\nEmployee #" << (count+1) << " pay rate: ";
      cin >> rate;
      employees[count].setPayRate(rate);

      // Get the employee's hours worked
      cout << "Employee #" << (count+1) << " hours worked: ";
      cin >> hours;
      employees[count].setHours(hours);
   }

   // Display the total pay for each employee.
   cout << "Total pay:\n";
   cout << setprecision(2) << fixed << showpoint << right;
   for ( count = 0; count < NUM_EMPLOYEES; count++)
   {
      cout << "\tEmployee #" << (count+1) << ": ";
      cout << setw(8) << employees[count].getTotalPay() << endl;

   }

   return 0;
}
