// Fig. 9.18: Date.h 
// Date class definition; Member functions defined in Date.cpp
#include <string>

#ifndef DATE_H
#define DATE_H

class Date {
public:
   static const unsigned int monthsPerYear{12}; // months in a year
   explicit Date(unsigned int = 1, unsigned int = 1, unsigned int = 1900);
   std::string toString() const; // date string in month/day/year format
   ~Date(); // provided to confirm destruction order
private:
   unsigned int month; // 1-12 (January-December)
   unsigned int day; // 1-31 based on month
   unsigned int year; // any year

   // utility function to check if day is proper for month and year
   unsigned int checkDay(int) const;
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
