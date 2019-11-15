// Fig. 10.17: Hugeinteger.h 
// HugeInteger class definition.
#ifndef HugeInteger_H
#define HugeInteger_H

#include <array>
#include <iostream>
#include <string>

class HugeInteger {
   friend std::ostream& operator<<(std::ostream&, const HugeInteger&);
public:
   static const int digits{40}; // maximum digits in a HugeInteger

   HugeInteger(long = 0); // conversion/default constructor
   HugeInteger(const std::string&); // conversion constructor

   // addition operator; HugeInteger + HugeInteger
   HugeInteger operator+(const HugeInteger&) const;

   // addition operator; HugeInteger + int
   HugeInteger operator+(int) const;

   // addition operator; 
   // HugeInteger + string that represents large integer value
   HugeInteger operator+(const std::string&) const;
private:
   std::array<short, digits> integer{}; // default init to 0s
};

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
