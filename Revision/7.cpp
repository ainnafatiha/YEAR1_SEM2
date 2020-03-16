// Chapter 13, Programming Challenge 7: Widget Factory
#include <iostream>
using namespace std;

// Declaration of the Widget class

class Widget
{
private:
   int   numHours;
   int   numShifts;
   int   widgetsPerHour;

public:
   // Consructor
   Widget() 
      { numShifts = 2; widgetsPerHour = 10; numHours = 8;}

   double daysToProduce(int);
};

// Constructor                        

double Widget::daysToProduce(int widgets)
{
   double numDays = 
      static_cast<double>(widgets) / (numHours * numShifts * widgetsPerHour);
   return numDays;
}

// Function main                      

int main()
{
   int    howMany;   // Number of widgets on order
   double days;      // Required number of days to produce
   
   // Create a Widget object.
   Widget factory;

   // Get the number of widgets on order.
   cout << "This program will calculate widget production time.\n";
   cout << "How many widgets are on order? ";
   cin  >> howMany;
   
   // Validate the number of widgets.
   while (howMany < 0)
   {  
      cout << "Number must be 0 or greater.  Please re-enter: ";
      cin  >> howMany;
   }
   
   // Get the required number of days to produce
   // that many widgets.
   days = factory.daysToProduce(howMany);
   
   // Display the results.
   cout << "It will take " << days << " days to produce ";
   cout << howMany << " widgets.\n\n";

   return 0;
}
