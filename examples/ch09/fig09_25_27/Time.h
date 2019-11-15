// Fig. 9.25: Time.h
// Time class modified to enable cascaded member-function calls.
#include <string>

// Time class definition.
// Member functions defined in Time.cpp.
#ifndef TIME_H
#define TIME_H

class Time {
public:
   explicit Time(int = 0, int = 0, int = 0); // default constructor

   // set functions (the Time& return types enable cascading)
   Time& setTime(int, int, int); // set hour, minute, second
   Time& setHour(int); // set hour                          
   Time& setMinute(int); // set minute                      
   Time& setSecond(int); // set second                      

   unsigned int getHour() const; // return hour
   unsigned int getMinute() const; // return minute
   unsigned int getSecond() const; // return second
   std::string toUniversalString() const; // 24-hour time format string
   std::string toStandardString() const; // 12-hour time format string
private:
   unsigned int hour{0}; // 0 - 23 (24-hour clock format)
   unsigned int minute{0}; // 0 - 59
   unsigned int second{0}; // 0 - 59
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
