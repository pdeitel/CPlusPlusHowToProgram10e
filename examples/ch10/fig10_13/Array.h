// Fig. 10.10: Array.h
// Array class definition with overloaded operators.
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array {
   friend std::ostream &operator<<( std::ostream &, const Array & );
   friend std::istream &operator>>( std::istream &, Array & );

public:
   explicit Array( int = 10 ); // default constructor
   Array( const Array & ); // copy constructor
   ~Array(); // destructor
   size_t getSize() const; // return size

   const Array &operator=( const Array & ); // assignment operator
   bool operator==( const Array & ) const; // equality operator

   // inequality operator; returns opposite of == operator
   bool operator!=( const Array &right ) const  
   { 
      return ! ( *this == right ); // invokes Array::operator==
   } // end function operator!=
   
   // subscript operator for non-const objects returns modifiable lvalue
   int &operator[]( int );              

   // subscript operator for const objects returns rvalue
   int operator[]( int ) const;  
private:
   size_t size; // pointer-based array size
   int *ptr; // pointer to first element of pointer-based array
}; // end class Array

#endif

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
