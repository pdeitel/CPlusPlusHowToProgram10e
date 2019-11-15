// Fig. 16.13: fig16_13.cpp
// Algorithms min, max, minmax and minmax_element.
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
   cout << "The minimum of 12 and 7 is: " << min(12, 7);
   cout << "\nThe maximum of 12 and 7 is: " << max(12, 7);
   cout << "\nThe minimum of 'G' and 'Z' is: " << min('G', 'Z');
   cout << "\nThe maximum of 'G' and 'Z' is: " << max('G', 'Z');

   // determine which argument is the min and which is the max
   auto result1 = minmax(12, 7);
   cout << "\n\nThe minimum of 12 and 7 is: " << result1.first 
      << "\nThe maximum of 12 and 7 is: " << result1.second;

   array<int, 10> items{3, 100, 52, 77, 22, 31, 1, 98, 13, 40};
   ostream_iterator<int> output{cout, " "};

   cout << "\n\nArray items contains: ";
   copy(items.cbegin(), items.cend(), output);

   auto result2 = minmax_element(items.cbegin(), items.cend());
   cout << "\nThe minimum element in items is: " << *result2.first
      << "\nThe maximum element in items is: " << *result2.second << endl;
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
