// Fig. 13.18: Fig13_18.cpp
// Stream manipulators boolalpha and noboolalpha.
#include <iostream>
using namespace std;

int main() {
   bool booleanValue{true};

   // display default true booleanValue
   cout << "booleanValue is " << booleanValue;

   // display booleanValue after using boolalpha
   cout << "\nbooleanValue (after using boolalpha) is "
      << boolalpha << booleanValue;

   cout << "\n\nswitch booleanValue and use noboolalpha\n";
   booleanValue = false; // change booleanValue
   cout << noboolalpha; // use noboolalpha

   // display default false booleanValue after using noboolalpha
   cout << "\nbooleanValue is " << booleanValue;

   // display booleanValue after using boolalpha again
   cout << "\nbooleanValue (after using boolalpha) is "
      << boolalpha << booleanValue << endl;
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
