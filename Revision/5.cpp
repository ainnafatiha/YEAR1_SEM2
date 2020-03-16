#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Class declaration
class RetailItem
{
private:
   string description;  // Item description
   int unitsOnHand;     // Units on hand
   double price;        // Item price
   
public:
   // Constructor
   RetailItem(string d, int u, double p)
      { description = d; unitsOnHand = u; price = p; }
   
   // Mutators
   void setDescription(string d)
      { description = d; }
   
   void setUnitsOnHand(int u)
      { unitsOnHand = u; }
      
   void setPrice(double p)
      { price = p; }
      
   // Accessors
   string getDescription()
      { return description; }
      
   int getUnitsOnHand()
      { return unitsOnHand; }
   
   double getPrice()
      { return price; }
};

// Function prototype
void displayItem(RetailItem);

int main()
{
   // Create three RetailItem objects.
   RetailItem item1("Jacket", 12, 59.95);
   RetailItem item2("Designer Jeans", 40, 34.95);
   RetailItem item3("Shirt", 20, 24.95);
   
   // Display each item's data.
   displayItem(item1);
   displayItem(item2);
   displayItem(item3);
   
   return 0;
}

// The displayItem function displays the data      
// in a RetailItem object.                         

void displayItem(RetailItem item)
{
   cout << setprecision(2) << fixed << showpoint;
   cout << "Description: " << item.getDescription() << endl;
   cout << "Units on hand: " << item.getUnitsOnHand() << endl;
   cout << "Price: $" << item.getPrice() << endl << endl;
}
