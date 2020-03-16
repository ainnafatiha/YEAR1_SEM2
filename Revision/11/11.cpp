// Chapter 13, Programming Challenge 11: Number Array Class
#include <iostream>
#include "NumberArray.h"
#include "NumberArray.cpp"

using namespace std;

int main()
{
   int howMany;   // The number of numbers
   int count;     // Loop counter
   double val;    // To hold a value

   // Get the number of numbers to store.
   cout << "How many numbers do you want to store? ";
   cin >> howMany;
   
   // Create a NumberArray object.
   NumberArray numbers(howMany);
   
   // Get the numbers.
   cout << "Enter the " << howMany << " numbers:\n";
   for (count = 0; count < howMany; count++)
   {
      // Get a number.
      cout << "\tNumber " << (count+1) << ": ";
      cin >> val;
      
      // Store it in the object.
      numbers.setCell(count, val);
   }

   // Display the values in the object.
   cout << "Here are the values you entered:\n";
   for (count = 0; count < howMany; count++)
   {
      cout << "\tNumber " << (count+1) << ": "
           << numbers.getCell(count)
           << endl;
   }
   
   // Display the average of the values.
   cout << "The average of those values is ";
   cout << numbers.average() << endl;

   return 0;
}
