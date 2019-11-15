// Fig. 16.11: fig16_11.cpp
// Algorithms includes, set_difference, set_intersection, 
// set_symmetric_difference and set_union.
#include <iostream>
#include <array>
#include <algorithm> // algorithm definitions
#include <iterator> // ostream_iterator
using namespace std;

int main() {
   const size_t SIZE1{10}, SIZE2{5}, SIZE3{20};
   array<int, SIZE1> a1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   array<int, SIZE2> a2{4, 5, 6, 7, 8};
   array<int, SIZE2> a3{4, 5, 6, 11, 15};
   ostream_iterator<int> output{cout, " "};

   cout << "a1 contains: ";
   copy(a1.cbegin(), a1.cend(), output); // display array a1
   cout << "\na2 contains: ";
   copy(a2.cbegin(), a2.cend(), output); // display array a2
   cout << "\na3 contains: ";
   copy(a3.cbegin(), a3.cend(), output); // display array a3

   // determine whether a2 is completely contained in a1
   if (includes(a1.cbegin(), a1.cend(), a2.cbegin(), a2.cend())) {
      cout << "\n\na1 includes a2";
   }
   else {
      cout << "\n\na1 does not include a2";
   }

   // determine whether a3 is completely contained in a1
   if (includes(a1.cbegin(), a1.cend(), a3.cbegin(), a3.cend())) {
      cout << "\na1 includes a3";
   }
   else {
      cout << "\na1 does not include a3";
   }

   array<int, SIZE1> difference;

   // determine elements of a1 not in a2 
   auto result1 = set_difference(a1.cbegin(), a1.cend(),
      a2.cbegin(), a2.cend(), difference.begin());      
   cout << "\n\nset_difference of a1 and a2 is: ";
   copy(difference.begin(), result1, output);

   array<int, SIZE1> intersection;

   // determine elements in both a1 and a2                 
   auto result2 = set_intersection(a1.cbegin(), a1.cend(),
      a2.cbegin(), a2.cend(), intersection.begin());      
   cout << "\n\nset_intersection of a1 and a2 is: ";
   copy(intersection.begin(), result2, output);

   array<int, SIZE1 + SIZE2> symmetric_difference;

   // determine elements of a1 that are not in a3 and              
   // elements of a3 that are not in a1                            
   auto result3 = set_symmetric_difference(a1.cbegin(), a1.cend(),
      a3.cbegin(), a3.cend(), symmetric_difference.begin());      
   cout << "\n\nset_symmetric_difference of a1 and a3 is: ";
   copy(symmetric_difference.begin(), result3, output);

   array<int, SIZE3> unionSet;

   // determine elements that are in either or both sets
   auto result4 = set_union(a1.cbegin(), a1.cend(),
      a3.cbegin(), a3.cend(), unionSet.begin());   
   cout << "\n\nset_union of a1 and a3 is: ";
   copy(unionSet.begin(), result4, output);
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
