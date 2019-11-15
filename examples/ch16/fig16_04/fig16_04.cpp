// Fig. 16.4: fig16_04.cpp
// Algorithms remove, remove_if, remove_copy and remove_copy_if.
#include <iostream>
#include <algorithm> // algorithm definitions
#include <array> // array class-template definition
#include <iterator> // ostream_iterator
using namespace std;

int main() {
   const size_t SIZE{10};
   array<int, SIZE> init{10, 2, 10, 4, 16, 6, 14, 8, 12, 10};
   ostream_iterator<int> output{cout, " "};

   array<int, SIZE> a1(init); // initialize with copy of init
   cout << "a1 before removing all 10s:\n   ";
   copy(a1.cbegin(), a1.cend(), output);

   // remove all 10s from a1                                
   auto newEnd = remove(a1.begin(), a1.end(), 10);
   cout << "\na1 after removing all 10s:\n   ";
   copy(a1.begin(), newEnd, output);

   array<int, SIZE> a2(init); // initialize with copy of init
   array<int, SIZE> c{0}; // initialize to 0s
   cout << "\n\na2 before removing all 10s and copying:\n   ";
   copy(a2.cbegin(), a2.cend(), output);

   // copy from a2 to c, removing 10s in the process    
   remove_copy(a2.cbegin(), a2.cend(), c.begin(), 10);
   cout << "\nc after removing all 10s from a2:\n   ";
   copy(c.cbegin(), c.cend(), output);

   array<int, SIZE> a3(init); // initialize with copy of init
   cout << "\n\na3 before removing all elements greater than 9:\n   ";
   copy(a3.cbegin(), a3.cend(), output);

   // remove elements greater than 9 from a3                    
   newEnd = remove_if(a3.begin(), a3.end(),
      [](auto x){return x > 9;});                  
   cout << "\na3 after removing all elements greater than 9:\n   ";
   copy(a3.begin(), newEnd, output);

   array<int, SIZE> a4(init); // initialize with copy of init
   array<int, SIZE> c2{0}; // initialize to 0s
   cout << "\n\na4 before removing all elements "
      << "greater than 9 and copying:\n   ";
   copy(a4.cbegin(), a4.cend(), output);

   // copy elements from a4 to c2, removing elements greater      
   // than 9 in the process                                       
   remove_copy_if(a4.cbegin(), a4.cend(), c2.begin(),
      [](auto x){return x > 9;});                    
   cout << "\nc2 after removing all elements "
      << "greater than 9 from a4:\n   ";
   copy(c2.cbegin(), c2.cend(), output);
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
