// Fig. 16.7: fig16_07.cpp
// Standard Library search and sort algorithms.
#include <iostream>
#include <algorithm> // algorithm definitions
#include <array> // array class-template definition
#include <iterator> 
using namespace std;

int main() {
   const size_t SIZE{10};
   array<int, SIZE> a{10, 2, 17, 5, 16, 8, 13, 11, 20, 7};
   ostream_iterator<int> output{cout, " "};

   cout << "array a contains: ";
   copy(a.cbegin(), a.cend(), output); // display output vector

   // locate first occurrence of 16 in a            
   auto location = find(a.cbegin(), a.cend(), 16);

   if (location != a.cend()) { // found 16
      cout << "\n\nFound 16 at location " << (location - a.cbegin());
   }
   else { // 16 not found
      cout << "\n\n16 not found";
   }

   // locate first occurrence of 100 in a       
   location = find(a.cbegin(), a.cend(), 100);

   if (location != a.cend()) { // found 100
      cout << "\nFound 100 at location " << (location - a.cbegin());
   }
   else { // 100 not found 
      cout << "\n100 not found";
   }
 
   // create variable to store lambda for reuse later
   auto isGreaterThan10 = [](auto x){return x > 10;};

   // locate first occurrence of value greater than 10 in a
   location = find_if(a.cbegin(), a.cend(), isGreaterThan10);

   if (location != a.cend()) { // found value greater than 10
      cout << "\n\nThe first value greater than 10 is " << *location 
         << "\nfound at location " << (location - a.cbegin());
   }
   else { // value greater than 10 not found
      cout << "\n\nNo values greater than 10 were found";
   }

   // sort elements of a      
   sort(a.begin(), a.end());
   cout << "\n\narray a after sort: ";
   copy(a.cbegin(), a.cend(), output);

   // use binary_search to check whether 13 exists in a
   if (binary_search(a.cbegin(), a.cend(), 13)) {
      cout << "\n\n13 was found in a";
   }
   else {
      cout << "\n\n13 was not found in a";
   }

   // use binary_search to check whether 100 exists in a
   if (binary_search(a.cbegin(), a.cend(), 100)) {
      cout << "\n100 was found in a";
   }
   else {
      cout << "\n100 was not found in a";
   }

   // determine whether all of the elements of a are greater than 10
   if (all_of(a.cbegin(), a.cend(), isGreaterThan10)) {
      cout << "\n\nAll the elements in a are greater than 10";
   }
   else {
      cout << "\n\nSome elements in a are not greater than 10";
   }

   // determine whether any of the elements of a are greater than 10
   if (any_of(a.cbegin(), a.cend(), isGreaterThan10)) {
      cout << "\n\nSome of the elements in a are greater than 10";
   }
   else {
      cout << "\n\nNone of the elements in a are greater than 10";
   }

   // determine whether none of the elements of a are greater than 10
   if (none_of(a.cbegin(), a.cend(), isGreaterThan10)) {
      cout << "\n\nNone of the elements in a are greater than 10";
   }
   else { 
      cout << "\n\nSome of the elements in a are greater than 10";
   }

   // locate first occurrence of value that's not greater than 10 in a
   location = find_if_not(a.cbegin(), a.cend(), isGreaterThan10);

   if (location != a.cend()) { // found a value less than or equal to 10
      cout << "\n\nThe first value not greater than 10 is " << *location 
         << "\nfound at location " << (location - a.cbegin());
   }
   else { // no values less than or equal to 10 were found
      cout << "\n\nOnly values greater than 10 were found";
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
