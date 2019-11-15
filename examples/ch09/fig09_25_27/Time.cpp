// Fig. 9.26: Time.cpp 
// Time class member-function definitions.
#include <iomanip>
#include <sstream>
#include <stdexcept>
#include "Time.h" // Time class definition
using namespace std;

// constructor function to initialize private data;
// calls member function setTime to set variables;
// default values are 0 (see class definition)
Time::Time(int hr, int min, int sec) {
   setTime(hr, min, sec);
}

// set values of hour, minute, and second
Time& Time::setTime(int h, int m, int s) { // note Time& return
   setHour(h);
   setMinute(m);
   setSecond(s);
   return *this; // enables cascading
}

// set hour value
Time& Time::setHour(int h) { // note Time& return
   if (h >= 0 && h < 24) {
      hour = h;
   }
   else {
      throw invalid_argument("hour must be 0-23");
   }

   return *this; // enables cascading
}

// set minute value
Time& Time::setMinute(int m) { // note Time& return
   if (m >= 0 && m < 60) {
      minute = m;
   }
   else {
      throw invalid_argument("minute must be 0-59");
   }

   return *this; // enables cascading
}

// set second value
Time& Time::setSecond(int s) { // note Time& return
   if (s >= 0 && s < 60) {
      second = s;
   }
   else {
      throw invalid_argument("second must be 0-59");
   }

   return *this; // enables cascading
}

// get hour value
unsigned int Time::getHour() const { return hour; }

// get minute value
unsigned int Time::getMinute() const { return minute; }

// get second value
unsigned int Time::getSecond() const { return second; }

// return Time as a string in universal-time format (HH:MM:SS)
string Time::toUniversalString() const {
   ostringstream output;
   output << setfill('0') << setw(2) << getHour() << ":"
      << setw(2) << getMinute() << ":" << setw(2) << getSecond();
   return output.str();
}

// return Time as string in standard-time format (HH:MM:SS AM or PM)
string Time::toStandardString() const {
   ostringstream output;
   output << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
      << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
      << getSecond() << (hour < 12 ? " AM" : " PM");
   return output.str();
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
