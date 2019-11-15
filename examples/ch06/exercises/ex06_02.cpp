// Exercise 6.2: Ex06_02.cpp
#include <iostream>
using namespace std;

int cube(int y); // function prototype

int main() {
   int x{0};

   for (x = 1; x <= 10; x++) { // loop 10 times
      cout << cube(x) << endl; // calculate cube of x and output results
   }
}

// definition of function cube
int cube(int y) {
   return y * y * y;
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
