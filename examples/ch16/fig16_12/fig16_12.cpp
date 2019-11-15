// Fig. 16.12: fig16_12.cpp
// Algorithms lower_bound, upper_bound and 
// equal_range for a sorted sequence of values.
#include <iostream>
#include <algorithm> // algorithm definitions
#include <array> // aray class-template definition
#include <iterator> // ostream_iterator
using namespace std;

int main() {
   const size_t SIZE{10};
   array<int, SIZE> a{2, 2, 4, 4, 4, 6, 6, 6, 6, 8};
   ostream_iterator<int> output{cout, " "};

   cout << "array a contains: ";
   copy(a.cbegin(), a.cend(), output);

   // determine lower-bound insertion point for 6 in a 
   auto lower = lower_bound(a.cbegin(), a.cend(), 6);
   cout << "\n\nLower bound of 6 is element " 
      << (lower - a.cbegin()) << " of array a";

   // determine upper-bound insertion point for 6 in a 
   auto upper = upper_bound(a.cbegin(), a.cend(), 6);
   cout << "\nUpper bound of 6 is element " 
      << (upper - a.cbegin()) << " of array a";

   // use equal_range to determine both the lower- and         
   // upper-bound insertion points for 6                       
   auto eq = equal_range(a.cbegin(), a.cend(), 6);
   cout << "\nUsing equal_range:\n   Lower bound of 6 is element "
      << (eq.first - a.cbegin()) << " of array a";
   cout << "\n   Upper bound of 6 is element "
      << (eq.second - a.cbegin()) << " of array a";

   // determine lower-bound insertion point for 5 in a
   cout << "\n\nUse lower_bound to locate the first point\n"
      << "at which 5 can be inserted in order";
   lower = lower_bound(a.cbegin(), a.cend(), 5); 
   cout << "\n   Lower bound of 5 is element " 
      << (lower - a.cbegin()) << " of array a";

   // determine upper-bound insertion point for 7 in a
   cout << "\n\nUse upper_bound to locate the last point\n"
      << "at which 7 can be inserted in order";
   upper = upper_bound(a.cbegin(), a.cend(), 7);  
   cout << "\n   Upper bound of 7 is element " 
      << (upper - a.cbegin()) << " of array a";

   // use equal_range to determine both the lower- and
   // upper-bound insertion points for 5              
   cout << "\n\nUse equal_range to locate the first and\n"
      << "last point at which 5 can be inserted in order";
   eq = equal_range(a.cbegin(), a.cend(), 5);    
   cout << "\n   Lower bound of 5 is element "
      << (eq.first - a.cbegin()) << " of array a";
   cout << "\n   Upper bound of 5 is element "
      << (eq.second - a.cbegin()) << " of array a" << endl;
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
