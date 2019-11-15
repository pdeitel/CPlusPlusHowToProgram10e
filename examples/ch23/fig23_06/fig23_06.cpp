// Fig. 23.6: fig23_06.cpp
// Demonstrating operators .* and ->*.
#include <iostream>
using namespace std;

// class Test definition
class Test
{
public:
   void func()
   {
      cout << "In func\n";
   } // end function func

   int value; // public data member
}; // end class Test

void arrowStar( Test * ); // prototype
void dotStar( Test * ); // prototype

int main()
{
   Test test;
   test.value = 8; // assign value 8
   arrowStar( &test ); // pass address to arrowStar
   dotStar( &test ); // pass address to dotStar
} // end main

// access member function of Test object using ->*
void arrowStar( Test *testPtr )
{
   void ( Test::*memberPtr )() = &Test::func; // declare function pointer
   ( testPtr->*memberPtr )(); // invoke function indirectly
} // end arrowStar

// access members of Test object data member using .*
void dotStar( Test *testPtr2 )
{
   int Test::*vPtr = &Test::value; // declare pointer
   cout << ( *testPtr2 ).*vPtr << endl; // access value
} // end dotStar


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
