// Fig. 22.22: fig22_22.cpp
// Using strcpy and strncpy.
#include <iostream>
#include <cstring> // prototypes for strcpy and strncpy
using namespace std;

int main() {
   char x[]{"Happy Birthday to You"}; // string length 21
   char y[25];
   char z[15];

   strcpy(y, x); // copy contents of x into y

   cout << "The string in array x is: " << x
      << "\nThe string in array y is: " << y << '\n';
   
   // copy first 14 characters of x into z             
   strncpy(z, x, 14); // does not copy null character
   z[14] = '\0'; // append '\0' to z's contents      

   cout << "The string in array z is: " << z << endl;
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
