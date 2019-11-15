// Fig. 22.30: fig22_30.cpp
// Using atol.
#include <iostream>
#include <cstdlib> // atol prototype
using namespace std;

int main() {
   long x{atol("1000000")}; // convert string to long

   cout << "The string \"1000000\" converted to long is " << x
      << "\nThe converted value divided by 2 is " << x / 2 << endl;
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
