// Fig. 8.17: fig08_17.cpp
// Using subscripting and pointer notations with built-in arrays.
#include <iostream>
using namespace std;

int main() {
   int b[]{10, 20, 30, 40}; // create 4-element built-in array b
   int* bPtr{b}; // set bPtr to point to built-in array b

   // output built-in array b using array subscript notation
   cout << "Array b displayed with:\n\nArray subscript notation\n";

   for (size_t i{0}; i < 4; ++i) {
      cout << "b[" << i << "] = " << b[i] << '\n';
   }

   // output built-in array b using array name and pointer/offset notation
   cout << "\nPointer/offset notation where "
      << "the pointer is the array name\n";

   for (size_t offset1{0}; offset1 < 4; ++offset1) {
      cout << "*(b + " << offset1 << ") = " << *(b + offset1) << '\n';
   }

   // output built-in array b using bPtr and array subscript notation
   cout << "\nPointer subscript notation\n";

   for (size_t j{0}; j < 4; ++j) {
      cout << "bPtr[" << j << "] = " << bPtr[j] << '\n';
   }

   cout << "\nPointer/offset notation\n";

   // output built-in array b using bPtr and pointer/offset notation
   for (size_t offset2{0}; offset2 < 4; ++offset2) {
      cout << "*(bPtr + " << offset2 << ") = "
         << *(bPtr + offset2) << '\n';
   }
}

/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
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
