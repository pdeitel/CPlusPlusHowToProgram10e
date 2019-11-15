// Fig. 23.10: Derived.cpp
// Member-function definitions for class Derived
#include "Derived.h"

// constructor for Derived calls constructors for
// class Base1 and class Base2.
// use member initializers to call base-class constructors
Derived::Derived( int integer, char character, double double1 )
   : Base1( integer ), Base2( character ), real( double1 ) { }

// return real
double Derived::getReal() const
{
   return real;
} // end function getReal

// display all data members of Derived
ostream &operator<<( ostream &output, const Derived &derived )
{
   output << "    Integer: " << derived.value << "\n  Character: "
      << derived.letter << "\nReal number: " << derived.real;
   return output; // enables cascaded calls
} // end operator<<

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
