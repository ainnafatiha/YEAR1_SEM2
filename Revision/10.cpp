#include <iostream>
#include <iomanip>
using namespace std;

// Declaration of the Population class
class Population
{
private:
   int population;  // Current population
   int numBirths;   // Number of births
   int numDeaths;   // Number of deaths

public:
   // Constructor
   Population();
   
   // Mutators
   void setPopulation(int p)
      { population = p; }
      
   void setBirths(int b)
      { numBirths = b; }
      
   void setDeaths(int d)
      { numDeaths = d; }

   // Accessors
   int getPopulation() const
      { return population;}

   double getBirthRate() const
      { return static_cast<double>(numBirths) / population; }

   double getDeathRate() const
      { return static_cast<double>(numDeaths) / population; }
};

// Constructor                             

Population::Population()
{
   population = 0;
   numBirths  = 0;
   numDeaths  = 0;
}

// Function prototypes
void storePopulation(Population &);
void storeDeaths(Population &);
void storeBirths(Population &);

// Function main                           

int main()
{
   // Create a Population object.
   Population pop;

   // Set values for pop
   storePopulation(pop);  
   storeBirths(pop);
   storeDeaths(pop);

   // Display statistics for pop.
   cout << "\n\nPopulation Statistics  ";         
   cout << fixed << showpoint  << setprecision(4);
   cout << "\n\tPopulation:  " << setw(7) << pop.getPopulation();
   cout << "\n\tBirth Rate:  " << setw(7) << pop.getBirthRate();
   cout << "\n\tDeath Rate:  " << setw(7) << pop.getDeathRate() 
        << endl << endl;

   return 0;
}

// storePopulation function                

void storePopulation(Population &p)
{
   int pop;
   
   // Get the total population.
   cout << "\nEnter total population: ";
   cin  >> pop;
   
   // Validate it.
   while (pop < 1)
   {  
      cout << "Value must be greater than 0.  Please re-enter: ";
      cin  >> pop;
   } 
   
   // Store the population in p.
   p.setPopulation(pop);
}


void storeDeaths(Population &p)
{
   int deaths;
   
   // Get the number of deaths.
   cout << "\nEnter number of deaths per year: ";
   cin  >> deaths;
   
   // Validate it.
   while (deaths < 0)
   {  
      cout << "Value must be 0 or more.  Please re-enter: ";
      cin  >> deaths;
   } 
   
   // Store the number of deaths in p.
   p.setDeaths(deaths);
}

// storeBirths function                    

void storeBirths(Population &p)
{
   int births;
   
   // Get the number of births.
   cout << "\nEnter number of births per year: ";
   cin  >> births;
   
   // Validate it.
   while (births < 0)
   {  
      cout << "Value must be 0 or more.  Please re-enter: ";
      cin  >> births;
   } 
   
   // Store the number of births in p.
   p.setBirths(births);
}
