// Fig. 22.40: fig22_40.cpp
// Using strstr.
#include <iostream>
#include <cstring> // strstr prototype
using namespace std;

int main() {
   const char* string1{"abcdefabcdef"};
   const char* string2{"def"};

   cout << "string1 = " << string1 << "\nstring2 = " << string2
      << "\n\nThe remainder of string1 beginning with the\n"
      << "first occurrence of string2 is: "
      << strstr(string1, string2) << endl;
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
