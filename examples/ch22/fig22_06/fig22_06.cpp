// Fig. 22.6: fig22_06.cpp
// Printing an unsigned integer in bits.
#include <iostream>
#include <iomanip>
using namespace std;

void displayBits(unsigned); // prototype

int main() {
   unsigned inputValue{0}; // integral value to print in binary

   cout << "Enter an unsigned integer: ";
   cin >> inputValue;
   displayBits(inputValue);
} 

// display bits of an unsigned integer value
void displayBits(unsigned value) {
   const unsigned SHIFT{8 * sizeof(unsigned) - 1};
   const unsigned MASK{static_cast<const unsigned>(1 << SHIFT)};            

   cout << setw(10) << value << " = ";

   // display bits
   for (unsigned i{1}; i <= SHIFT + 1; ++i) {
      cout << (value & MASK ? '1' : '0');
      value <<= 1; // shift value left by 1

      if (i % 8 == 0) { // output a space after 8 bits
         cout << ' ';
      } 
   } 

   cout << endl;
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
