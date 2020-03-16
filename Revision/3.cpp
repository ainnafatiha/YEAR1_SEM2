#include <iostream>
#include <string>
using namespace std;

// Car class declaration
class Car
{
private:
   int yearModel;    // The car's year model
   string make;      // The car's make
   int speed;        // The car's current speed
   
public:
   // Constructor
   Car(int y, string m)
     { yearModel = y; make = m; speed = 0; }
     
   // accelearate function
   void accelerate()
      { speed += 5; }
      
   // brake function
   void brake()
      { speed -= 5; }
      
   // Accessor functions
   int getYearModel()
      { return yearModel; }
      
   string getMake()
      { return make; }
      
   int getSpeed()
      { return speed; }
};

int main()
{
   // Loop counter
   int count;
   
   // Create a car object.
   Car porsche(2006, "Porsche");
   
   // Display the current speed.
   cout << "Current speed: " 
        << porsche.getSpeed() 
        << endl;
   
   // Accelerate five times.
   for (count = 0; count < 5; count++)
   {
      // Accelerate and display the speed.
      cout << "Accelerating...\n";
      porsche.accelerate();
      cout << "Current speed: " 
           << porsche.getSpeed() 
           << endl;
   }

   // Brake five times.
   for (count = 0; count < 5; count++)
   {
      // Brake and display the speed.
      cout << "Braking...\n";
      porsche.brake();
      cout << "Current speed: " 
           << porsche.getSpeed() 
           << endl;
   }

   return 0;
}
