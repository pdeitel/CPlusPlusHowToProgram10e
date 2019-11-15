// Fig. 10.6: Date.h
// Date class definition with overloaded increment operators.
#ifndef DATE_H
#define DATE_H

#include <array>
#include <iostream>

class Date {
   friend std::ostream& operator<<(std::ostream&, const Date&);
public:
   Date(int m = 1, int d = 1, int y = 1900); // default constructor
   void setDate(int, int, int); // set month, day, year
   Date& operator++(); // prefix increment operator                  
   Date operator++(int); // postfix increment operator       
   Date& operator+=(unsigned int); // add days, modify object
   static bool leapYear(int); // is year a leap year?
   bool endOfMonth(int) const; // is day at the end of month?
private:
   unsigned int month;
   unsigned int day;
   unsigned int year;

   static const std::array<unsigned int, 13> days; // days per month
   void helpIncrement(); // utility function for incrementing date
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
