#include <iostream>
using namespace std;

// Class declaration
class FreezeBoil
{
private:
   double temperature;     // To hold a temperature
   
public:
   // Default constructor
   FreezeBoil()
      { temperature = 0; }
      
   // Constructor
   FreezeBoil(double t)
      { temperature = t; }
   
   // Mutator
   void setTemperature(double t)
      { temperature = t; }
   
   // Accessor
   double getTemperature() const
      { return temperature; }
   
   // Other member functions
   bool isEthylFreezing()
      { if (temperature <= -173)
           return true;
        else
           return false;
      }

   bool isEthylBoiling()
      { if (temperature >= 172)
           return true;
        else
           return false;
      }

   bool isOxygenFreezing()
      { if (temperature <= -362)
           return true;
        else
           return false;
      }

   bool isOxygenBoiling()
      { if (temperature >= 306)
           return true;
        else
           return false;
      }
   
   bool isWaterFreezing()
      { if (temperature <= 32)
           return true;
        else
           return false;
      }

   bool isWaterBoiling()
      { if (temperature >= 212)
           return true;
        else
           return false;
      }
};

// Main function
int main()
{
   double temp;  // To hold a temperature
   
   // Create a FreezeBoil object.
   FreezeBoil substance;
   
   // Get a temperature.
   cout << "Enter a temperature: ";
   cin >> temp;
   
   // Store the temperature in the object.
   substance.setTemperature(temp);
   
   // Display the substances that freeze at that temp.
   cout << "The following substances freeze at "
        << "that temperature:\n";
   if (substance.isEthylFreezing())
      cout << "\tEthyl Alcohol\n";
   if (substance.isOxygenFreezing())
      cout << "\tOxygen\n";
   if (substance.isWaterFreezing())
      cout << "\tWater\n";

   // Display the substances that boil at that temp.
   cout << "The following substances boil at "
        << "that temperature:\n";
   if (substance.isEthylBoiling())
      cout << "\tEthyl Alcohol\n";
   if (substance.isOxygenBoiling())
      cout << "\tOxygen\n";
   if (substance.isWaterBoiling())
      cout << "\tWater\n";
      
   return 0;
}
