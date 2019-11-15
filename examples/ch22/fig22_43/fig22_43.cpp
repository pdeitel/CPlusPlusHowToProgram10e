// Fig. 22.43: fig22_43.cpp
// Using memmove.
#include <iostream>
#include <cstring> // memmove prototype
using namespace std;

int main() {
   char x[]{"Home Sweet Home"};

   cout << "The string in array x before memmove is: " << x;
   cout << "\nThe string in array x after memmove is:  "
      << static_cast<char*>(memmove(x, &x[5], 10)) << endl;
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
