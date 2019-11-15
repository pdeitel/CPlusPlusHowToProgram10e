// Fig. 22.26: fig22_26.cpp
// Using strlen.
#include <iostream>
#include <cstring> // prototype for strlen
using namespace std;

int main() {
   const char* string1{"abcdefghijklmnopqrstuvwxyz"};
   const char* string2{"four"};
   const char* string3{"Boston"};

   cout << "The length of \"" << string1 << "\" is " << strlen(string1)
      << "\nThe length of \"" << string2 << "\" is " << strlen(string2)
      << "\nThe length of \"" << string3 << "\" is " << strlen(string3)
      << endl;
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
