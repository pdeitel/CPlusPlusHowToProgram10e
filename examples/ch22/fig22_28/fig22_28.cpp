// Fig. 22.28: fig22_28.cpp
// Using atof.
#include <iostream>
#include <cstdlib> // atof prototype
using namespace std;

int main() {
   double d{atof("99.0")}; // convert string to double

   cout << "The string \"99.0\" converted to double is " << d 
      << "\nThe converted value divided by 2 is " << d / 2.0 << endl;
} 

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
