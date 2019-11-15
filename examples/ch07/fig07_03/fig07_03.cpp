// Fig. 7.3: fig07_03.cpp
// Initializing an array's elements to zeros and printing the array.
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
   array<int, 5> n; // n is an array of 5 int values

   // initialize elements of array n to 0        
   for (size_t i{0}; i < n.size(); ++i) {
      n[i] = 0; // set element at location i to 0
   }

   cout << "Element" << setw(10) << "Value" << endl;

   // output each array element's value                
   for (size_t j{0}; j < n.size(); ++j) {
      cout << setw(7) << j << setw(10) << n[j] << endl;
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
