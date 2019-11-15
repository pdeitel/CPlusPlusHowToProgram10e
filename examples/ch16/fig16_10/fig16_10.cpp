// Fig. 16.10: fig16_10.cpp
// Algorithms inplace_merge, reverse_copy and unique_copy.
#include <iostream>
#include <algorithm> // algorithm definitions
#include <array> // array class-template definition
#include <vector> // vector class-template definition
#include <iterator> // back_inserter definition
using namespace std;

int main() {
   const int SIZE{10};
   array<int, SIZE> a1{1, 3, 5, 7, 9, 1, 3, 5, 7, 9};
   ostream_iterator<int> output(cout, " ");

   cout << "array a1 contains: ";
   copy(a1.cbegin(), a1.cend(), output);

   // merge first half of a1 with second half of a1 such that
   // a1 contains sorted set of elements after merge         
   inplace_merge(a1.begin(), a1.begin() + 5, a1.end());    

   cout << "\nAfter inplace_merge, a1 contains: ";
   copy(a1.cbegin(), a1.cend(), output);

   vector<int> results1;

   // copy only unique elements of a1 into results1                 
   unique_copy(a1.cbegin(), a1.cend(), back_inserter(results1));
   cout << "\nAfter unique_copy results1 contains: ";
   copy(results1.cbegin(), results1.cend(), output);

   vector<int> results2;

   // copy elements of a1 into results2 in reverse order             
   reverse_copy(a1.cbegin(), a1.cend(), back_inserter(results2));
   cout << "\nAfter reverse_copy, results2 contains: ";
   copy(results2.cbegin(), results2.cend(), output); 
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
