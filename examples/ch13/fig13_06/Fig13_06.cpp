// Fig. 13.6: Fig13_06.cpp 
// Using stream manipulators hex, oct, dec and setbase.
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
   int number;

   cout << "Enter a decimal number: ";
   cin >> number; // input number

   // use hex stream manipulator to show hexadecimal number
   cout << number << " in hexadecimal is: " << hex << number << "\n";

   // use oct stream manipulator to show octal number
   cout << dec << number << " in octal is: " << oct << number << "\n";

   // use setbase stream manipulator to show decimal number
   cout << setbase(10) << number << " in decimal is: " << number << endl;
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
