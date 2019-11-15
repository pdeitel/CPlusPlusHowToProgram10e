// Fig. 13.16: Fig13_16.cpp 
// Floating-point values displayed in system default,
// scientific and fixed formats.
#include <iostream>
using namespace std;

int main() {
   double x{0.001234567};
   double y{1.946e9};

   // display x and y in default format
   cout << "Displayed in default format:\n" << x << '\t' << y;

   // display x and y in scientific format
   cout << "\n\nDisplayed in scientific format:\n"
      << scientific << x << '\t' << y;

   // display x and y in fixed format
   cout << "\n\nDisplayed in fixed format:\n"
      << fixed << x << '\t' << y << endl;
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
