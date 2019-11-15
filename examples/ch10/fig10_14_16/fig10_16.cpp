// Fig. 10.16: fig10_16.cpp
// Complex class test program.
#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
   Complex x;
   Complex y{4.3, 8.2};
   Complex z{3.3, 1.1};

   cout << "x: " << x.toString() << "\ny: " << y.toString() 
      << "\nz: " << z.toString();

   x = y + z;
   cout << "\n\nx = y + z:\n" << x.toString() << " = " << y.toString() 
      << " + " << z.toString();

   x = y - z;
   cout << "\n\nx = y - z:\n" << x.toString() << " = " << y.toString()
      << " - " << z.toString() << endl;
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
