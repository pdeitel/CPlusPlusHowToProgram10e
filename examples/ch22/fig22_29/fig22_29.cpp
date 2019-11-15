// Fig. 22.29: fig22_29.cpp
// Using atoi.
#include <iostream>
#include <cstdlib> // atoi prototype
using namespace std;

int main() {
   int i{atoi("2593")}; // convert string to int

   cout << "The string \"2593\" converted to int is " << i
      << "\nThe converted value minus 593 is " << i - 593 << endl;
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
