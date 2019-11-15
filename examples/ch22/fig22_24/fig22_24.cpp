// Fig. 22.24: fig22_24.cpp
// Using strcmp and strncmp.
#include <iostream>
#include <iomanip>
#include <cstring> // prototypes for strcmp and strncmp
using namespace std;

int main() {
   const char* s1{"Happy New Year"};
   const char* s2{"Happy New Year"};
   const char* s3{"Happy Holidays"};
 
   cout << "s1 = " << s1 << "\ns2 = " << s2 << "\ns3 = " << s3 
      << "\n\nstrcmp(s1, s2) = " << setw(2) << strcmp(s1, s2)
      << "\nstrcmp(s1, s3) = " << setw(2) << strcmp(s1, s3)
      << "\nstrcmp(s3, s1) = " << setw(2) << strcmp(s3, s1);

   cout << "\n\nstrncmp(s1, s3, 6) = " << setw(2) 
      << strncmp(s1, s3, 6) << "\nstrncmp(s1, s3, 7) = " << setw(2) 
      << strncmp(s1, s3, 7) << "\nstrncmp(s3, s1, 7) = " << setw(2) 
      << strncmp(s3, s1, 7) << endl;
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
