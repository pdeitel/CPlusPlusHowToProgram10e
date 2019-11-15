// Fig. 21.8: Fig21_08.cpp
// Demonstrating class string insert member functions.
#include <iostream>
#include <string>
using namespace std;

int main() {
   string string1{"beginning end"};
   string string2{"middle "};
   string string3{"12345678"};
   string string4{"xx"};

   cout << "Initial strings:\nstring1: " << string1
      << "\nstring2: " << string2 << "\nstring3: " << string3
      << "\nstring4: " << string4 << "\n\n";

   // insert "middle" at location 10 in string1
   string1.insert(10, string2);

   // insert "xx" at location 3 in string3     
   string3.insert(3, string4, 0, string::npos);

   cout << "Strings after insert:\nstring1: " << string1
      << "\nstring2: " << string2 << "\nstring3: " << string3
      << "\nstring4: " << string4 << endl;
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
