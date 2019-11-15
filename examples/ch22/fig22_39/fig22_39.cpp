// Fig. 22.39: fig22_39.cpp
// Using strspn.
#include <iostream>
#include <cstring> // strspn prototype
using namespace std;

int main() {
   const char* string1{"The value is 3.14159"};
   const char* string2{"aehils Tuv"};

   cout << "string1 = " << string1 << "\nstring2 = " << string2
      << "\n\nThe length of the initial segment of string1\n"
      << "containing only characters from string2 = "
      << strspn(string1, string2) << endl;
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
