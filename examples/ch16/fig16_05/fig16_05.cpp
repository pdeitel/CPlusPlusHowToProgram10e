// Fig. 16.5: fig16_05.cpp
// Algorithms replace, replace_if, replace_copy and replace_copy_if.
#include <iostream>
#include <algorithm>
#include <array>
#include <iterator> // ostream_iterator
using namespace std;

int main() {
   const size_t SIZE{10};
   array<int, SIZE> init{10, 2, 10, 4, 16, 6, 14, 8, 12, 10};
   ostream_iterator<int> output{cout, " "};

   array<int, SIZE>  a1(init); // initialize with copy of init
   cout << "a1 before replacing all 10s:\n   ";
   copy(a1.cbegin(), a1.cend(), output);

   // replace all 10s in a1 with 100        
   replace(a1.begin(), a1.end(), 10, 100);
   cout << "\na1 after replacing 10s with 100s:\n   ";
   copy(a1.cbegin(), a1.cend(), output);

   array<int, SIZE> a2(init); // initialize with copy of init
   array<int, SIZE> c1; // instantiate c1
   cout << "\n\na2 before replacing all 10s and copying:\n   ";
   copy(a2.cbegin(), a2.cend(), output);

   // copy from a2 to c1, replacing 10s with 100s              
   replace_copy(a2.cbegin(), a2.cend(), c1.begin(), 10, 100);
   cout << "\nc1 after replacing all 10s in a2:\n   ";
   copy(c1.cbegin(), c1.cend(), output);

   array<int, SIZE> a3(init); // initialize with copy of init
   cout << "\n\na3 before replacing values greater than 9:\n   ";
   copy(a3.cbegin(), a3.cend(), output);

   // replace values greater than 9 in a3 with 100   
   replace_if(a3.begin(), a3.end(), [](auto x){return x > 9;}, 100);
   cout << "\na3 after replacing all values greater"
      << "\nthan 9 with 100s:\n   ";
   copy(a3.cbegin(), a3.cend(), output);

   array<int, SIZE> a4(init); // initialize with copy of init
   array<int, SIZE> c2; // instantiate c2‘
   cout << "\n\na4 before replacing all values greater "
      << "than 9 and copying:\n   ";
   copy(a4.cbegin(), a4.cend(), output);

   // copy a4 to c2, replacing elements greater than 9 with 100         
   replace_copy_if(a4.cbegin(), a4.cend(), c2.begin(),
      [](auto x){return x > 9;}, 100);                
   cout << "\nc2 after replacing all values greater than 9 in a4:\n   ";
   copy(c2.begin(), c2.end(), output);
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
