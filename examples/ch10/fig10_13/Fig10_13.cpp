// Fig. 10.13: fig10_13.cpp
// Demonstrating an explicit constructor.
#include <iostream>
#include "Array.h"
using namespace std;

void outputArray(const Array &); // prototype

int main() {
   Array integers1(7); // 7-element Array
   outputArray(integers1); // output Array integers1
   outputArray(3); // convert 3 to an Array and output Array’s contents
   outputArray(Array(3)); // explicit single-argument constructor call
}  // end main

// print Array contents
void outputArray(const Array &arrayToOutput)
{
   cout << "The Array received has " << arrayToOutput.getSize() 
      << " elements. The contents are:\n" << arrayToOutput << endl;
} // end outputArray


/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
