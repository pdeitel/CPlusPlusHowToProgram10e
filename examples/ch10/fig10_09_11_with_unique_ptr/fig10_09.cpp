// Fig. 10.9: fig10_09.cpp
// Array class test program.
#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main() {
   Array integers1{7}; // seven-element Array   
   Array integers2; // 10-element Array by default

   // print integers1 size and contents
   cout << "Size of Array integers1 is " << integers1.getSize()
      << "\nArray after initialization: " << integers1;

   // print integers2 size and contents
   cout << "\nSize of Array integers2 is " << integers2.getSize()
      << "\nArray after initialization: " << integers2;

   // input and print integers1 and integers2
   cout << "\nEnter 17 integers:" << endl;
   cin >> integers1 >> integers2;

   cout << "\nAfter input, the Arrays contain:\n"
      << "integers1: " << integers1
      << "integers2: " << integers2;

   // use overloaded inequality (!=) operator
   cout << "\nEvaluating: integers1 != integers2" << endl;

   if (integers1 != integers2) {
      cout << "integers1 and integers2 are not equal" << endl;
   }

   // create Array integers3 using integers1 as an          
   // initializer; print size and contents                  
   Array integers3{integers1}; // invokes copy constructor

   cout << "\nSize of Array integers3 is " << integers3.getSize()
      << "\nArray after initialization: " << integers3;

   // use overloaded assignment (=) operator
   cout << "\nAssigning integers2 to integers1:" << endl;
   integers1 = integers2; // note target Array is smaller

   cout << "integers1: " << integers1 << "integers2: " << integers2;

   // use overloaded equality (==) operator
   cout << "\nEvaluating: integers1 == integers2" << endl;

   if (integers1 == integers2) {
      cout << "integers1 and integers2 are equal" << endl;
   }

   // use overloaded subscript operator to create rvalue
   cout << "\nintegers1[5] is " << integers1[5];

   // use overloaded subscript operator to create lvalue
   cout << "\n\nAssigning 1000 to integers1[5]" << endl;
   integers1[5] = 1000;
   cout << "integers1:\n" << integers1;

   // attempt to use out-of-range subscript
   try {
      cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
      integers1[15] = 1000; // ERROR: subscript out of range
   }
   catch (out_of_range& ex) {
      cout << "An exception occurred: " << ex.what() << endl;
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
