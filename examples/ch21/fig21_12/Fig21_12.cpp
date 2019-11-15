// Fig. 21.12: Fig21_12.cpp
// Demonstrating input from an istringstream object.
#include <iostream>
#include <string>
#include <sstream>       
using namespace std;

int main() {
   string input{"Input test 123 4.7 A"};
   istringstream inputString{input};
   string string1;
   string string2;
   int integer;
   double double1;
   char character;

   inputString >> string1 >> string2 >> integer >> double1 >> character;

   cout << "The following items were extracted\n"
      << "from the istringstream object:" << "\nstring: " << string1
      << "\nstring: " << string2 << "\n   int: " << integer
      << "\ndouble: " << double1 << "\n  char: " << character;

   // attempt to read from empty stream
   long value;
   inputString >> value;

   // test stream results
   if (inputString.good()) {
      cout << "\n\nlong value is: " << value << endl;
   }
   else {
      cout << "\n\ninputString is empty" << endl;
   }
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
