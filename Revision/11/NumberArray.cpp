// Implementation file for the NumberArray class
#include <iostream>
#include "NumberArray.h"
using namespace std;

//********************************************
// Constructor                               *
//********************************************

NumberArray::NumberArray(int s)
{
   arrayPointer = new double[s];
   size = s;
}

//********************************************
// Destructor                                *
//********************************************

NumberArray::~NumberArray()
{
   if (arrayPointer != NULL)
      delete [] arrayPointer;
}

//********************************************
// setCell member function                   *
//********************************************

void NumberArray::setCell(int c, double val)
{
   if (arrayPointer != NULL && c >= 0 && c <= size)
      arrayPointer[c] = val;
   else
   {
      cout << "Invalid cell number.\n";
      //exit(EXIT_FAILURE);
   }
}

//********************************************
// getCell member function                   *
//********************************************

int NumberArray::getCell(int cellNum)
{
   if (cellNum < 0 || cellNum > size)
   {
      cout << "Invaild cell number.\n";
      //exit(EXIT_FAILURE);
   }

   return arrayPointer[cellNum];
}

//********************************************
// average member function                   *
//********************************************

double NumberArray::average()
{
   double total = 0;

   for (int count = 0; count < size; count++)
      total += arrayPointer[count];
   return total / size;
}
