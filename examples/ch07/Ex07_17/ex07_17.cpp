// Ex. 7.17: Ex07_17.cpp
// What does this program do?
#include <iostream>
#include <array>
using namespace std;

const size_t arraySize{10};
int whatIsThis(const array<int, arraySize>&, size_t); // prototype

int main() {
   array<int, arraySize> a{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   int result{whatIsThis(a, arraySize)};

   cout << "Result is " << result << endl;
}

// What does this function do?
int whatIsThis(const array<int, arraySize>& b, size_t size) {
   if (size == 1) { // base case
      return b[0];
   }
   else { // recursive step
      return b[size - 1] + whatIsThis(b, size - 1);
   }
}

/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
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
