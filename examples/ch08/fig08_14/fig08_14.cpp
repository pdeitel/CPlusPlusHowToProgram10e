// Fig. 8.14: fig08_14.cpp
// sizeof operator used to determine standard data type sizes.
#include <iostream>
using namespace std;

int main() {
   char c; // variable of type char
   short s; // variable of type short
   int i; // variable of type int
   long l; // variable of type long
   long long ll; // variable of type long long
   float f; // variable of type float
   double d; // variable of type double
   long double ld; // variable of type long double
   int array[20]; // built-in array of int
   int* ptr{array}; // variable of type int*

   cout << "sizeof c = " << sizeof c
      << "\tsizeof(char) = " << sizeof(char)
      << "\nsizeof s = " << sizeof s
      << "\tsizeof(short) = " << sizeof(short)
      << "\nsizeof i = " << sizeof i
      << "\tsizeof(int) = " << sizeof(int)
      << "\nsizeof l = " << sizeof l
      << "\tsizeof(long) = " << sizeof(long)
      << "\nsizeof ll = " << sizeof ll
      << "\tsizeof(long long) = " << sizeof(long long)
      << "\nsizeof f = " << sizeof f
      << "\tsizeof(float) = " << sizeof(float)
      << "\nsizeof d = " << sizeof d
      << "\tsizeof(double) = " << sizeof(double)
      << "\nsizeof ld = " << sizeof ld
      << "\tsizeof(long double) = " << sizeof(long double)
      << "\nsizeof array = " << sizeof array
      << "\nsizeof ptr = " << sizeof ptr << endl;
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
