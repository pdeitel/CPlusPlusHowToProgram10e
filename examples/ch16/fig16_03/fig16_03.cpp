// Fig. 16.3: fig16_03.cpp
// Algorithms equal, mismatch and lexicographical_compare.
#include <iostream>
#include <algorithm> // algorithm definitions
#include <array> // array class-template definition
#include <iterator> // ostream_iterator
using namespace std;

int main() {
   const size_t SIZE{10};
   array<int, SIZE> a1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   array<int, SIZE> a2(a1); // initializes a2 with copy of a1
   array<int, SIZE> a3{1, 2, 3, 4, 1000, 6, 7, 8, 9, 10};
   ostream_iterator<int> output{cout, " "};

   cout << "a1 contains: ";
   copy(a1.cbegin(), a1.cend(), output);
   cout << "\na2 contains: ";
   copy(a2.cbegin(), a2.cend(), output);
   cout << "\na3 contains: ";
   copy(a3.cbegin(), a3.cend(), output);

   // compare a1 and a2 for equality                        
   bool result{equal(a1.cbegin(), a1.cend(), a2.cbegin(), a2.cend())};
   cout << "\n\na1 " << (result ? "is" : "is not") << " equal to a2\n";

   // compare a1 and a3 for equality                     
   result = equal(a1.cbegin(), a1.cend(), a3.cbegin(), a3.cend());
   cout << "a1 " << (result ? "is" : "is not") << " equal to a3\n";

   // check for mismatch between a1 and a3                         
   auto location =                                             
      mismatch(a1.cbegin(), a1.cend(), a3.cbegin(), a3.cend());
   cout << "\nThere is a mismatch between a1 and a3 at location "
      << (location.first - a1.begin()) << "\nwhere a1 contains " 
      << *location.first << " and a3 contains " << *location.second  
      << "\n\n";

   char c1[SIZE] = "HELLO";
   char c2[SIZE] = "BYE BYE";

   // perform lexicographical comparison of c1 and c2  
   result = lexicographical_compare(              
      cbegin(c1), cend(c1), cbegin(c2), cend(c2));
   cout << c1 << (result ? " is less than " : 
      " is greater than or equal to ")  << c2 << endl;
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
