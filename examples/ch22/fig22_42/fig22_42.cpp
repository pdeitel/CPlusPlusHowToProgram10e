// Fig. 22.42: fig22_42.cpp
// Using memcpy.
#include <iostream>
#include <cstring> // memcpy prototype
using namespace std;

int main() {
   char s1[17]{};

   // 17 total characters (includes terminating null)
   char s2[]{"Copy this string"};

   memcpy(s1, s2, 17); // copy 17 characters from s2 to s1

   cout << "After s2 is copied into s1 with memcpy,\n"
      << "s1 contains \"" << s1 << '\"' << endl;
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
