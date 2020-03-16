// Specification file for the NumberArray class
#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumberArray
{
private:
   double *arrayPointer;
   int size;
   
public:
   // Constructor
   NumberArray(int);
   
   // Destructor
   ~NumberArray();
   
   // Mutator
   void setCell(int, double);
   
   // Accessor
   int getCell(int);
   
   // Average function
   double average();
};

#endif 