// Fig. 15.13: fig15_13.cpp
// Standard library list class template.
#include <iostream>
#include <vector>
#include <list> // list class-template definition
#include <algorithm> // copy algorithm
#include <iterator> // ostream_iterator
using namespace std;

// prototype for function template printList
template <typename T> void printList(const list<T>& listRef);

int main() {
   list<int> values; // create list of ints     
   list<int> otherValues; // create list of ints

   // insert items in values
   values.push_front(1);    
   values.push_front(2);    
   values.push_back(4);     
   values.push_back(3);     

   cout << "values contains: ";
   printList(values);

   values.sort(); // sort values
   cout << "\nvalues after sorting contains: ";
   printList(values);

   // insert elements of ints into otherValues                            
   vector<int> ints{2, 6, 4, 8};
   otherValues.insert(otherValues.cbegin(), ints.cbegin(), ints.cend());
   cout << "\nAfter insert, otherValues contains: ";
   printList(otherValues);

   // remove otherValues elements and insert at end of values
   values.splice(values.cend(), otherValues);                
   cout << "\nAfter splice, values contains: ";
   printList(values);

   values.sort(); // sort values
   cout << "\nAfter sort, values contains: ";
   printList(values);

   // insert elements of ints into otherValues                            
   otherValues.insert(otherValues.cbegin(), ints.cbegin(), ints.cend());
   otherValues.sort(); // sort the list                                 
   cout << "\nAfter insert and sort, otherValues contains: ";
   printList(otherValues);

   // remove otherValues elements and insert into values in sorted order
   values.merge(otherValues);                                           
   cout << "\nAfter merge:\n   values contains: ";
   printList(values);
   cout << "\n   otherValues contains: ";
   printList(otherValues);

   values.pop_front(); // remove element from front
   values.pop_back(); // remove element from back  
   cout << "\nAfter pop_front and pop_back:\n   values contains: ";
   printList(values);

   values.unique(); // remove duplicate elements
   cout << "\nAfter unique, values contains: ";
   printList(values);

   values.swap(otherValues); // swap elements of values and otherValues
   cout << "\nAfter swap:\n   values contains: ";
   printList(values);
   cout << "\n   otherValues contains: ";
   printList(otherValues);

   // replace contents of values with elements of otherValues
   values.assign(otherValues.cbegin(), otherValues.cend());
   cout << "\nAfter assign, values contains: ";
   printList(values);

   // remove otherValues elements and insert into values in sorted order
   values.merge(otherValues);                                         
   cout << "\nAfter merge, values contains: ";
   printList(values); 

   values.remove(4); // remove all 4s
   cout << "\nAfter remove(4), values contains: ";
   printList(values);
   cout << endl;
} 

// printList function template definition; uses 
// ostream_iterator and copy algorithm to output list elements
template <typename T> void printList(const list<T>& listRef) {
   if (listRef.empty()) { // list is empty
      cout << "List is empty";
   }
   else {
      ostream_iterator<T> output{cout, " "};
      copy(listRef.cbegin(), listRef.cend(), output);
   } 
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

