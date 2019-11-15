// Fig. 22.35: fig22_35.cpp
// Using strchr.
#include <iostream>
#include <cstring> // strchr prototype
using namespace std;

int main() {
   const char* string1{"This is a test"};
   char character1{'a'};
   char character2{'z'};

   // search for character1 in string1
   if (strchr(string1, character1) != NULL) {
      cout << '\'' << character1 << "' was found in \""
         << string1 << "\".\n";
   }
   else {
      cout << '\'' << character1 << "' was not found in \""
         << string1 << "\".\n";
   }

   // search for character2 in string1
   if (strchr(string1, character2) != NULL) {
      cout << '\'' << character2 << "' was found in \""
         << string1 << "\".\n";
   }
   else {
      cout << '\'' << character2 << "' was not found in \""
         << string1 << "\"." << endl;
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
