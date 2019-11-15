// Fig. 15.14: fig15_14.cpp
// Standard Library deque class template.
#include <iostream>
#include <deque> // deque class-template definition
#include <algorithm> // copy algorithm
#include <iterator> // ostream_iterator
using namespace std;

int main() {
   deque<double> values; // create deque of doubles
   ostream_iterator<double> output{cout, " "};

   // insert elements in values
   values.push_front(2.2);   
   values.push_front(3.5);   
   values.push_back(1.1);    

   cout << "values contains: ";

   // use subscript operator to obtain elements of values
   for (size_t i{0}; i < values.size(); ++i) {
      cout << values[i] << ' ';
   }

   values.pop_front(); // remove first element
   cout << "\nAfter pop_front, values contains: ";
   copy(values.cbegin(), values.cend(), output);

   // use subscript operator to modify element at location 1
   values[1] = 5.4;                                       
   cout << "\nAfter values[1] = 5.4, values contains: ";
   copy(values.cbegin(), values.cend(), output);
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
