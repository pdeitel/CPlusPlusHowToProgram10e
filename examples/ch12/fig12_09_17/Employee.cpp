// Fig. 12.10: Employee.cpp
// Abstract-base-class Employee member-function definitions.
// Note: No definitions are given for pure virtual functions.
#include <sstream>
#include "Employee.h" // Employee class definition
using namespace std;

// constructor
Employee::Employee(const string& first, const string& last,
   const string& ssn)
   : firstName(first), lastName(last), socialSecurityNumber(ssn) {}

// set first name
void Employee::setFirstName(const string& first) { firstName = first; }

// return first name
string Employee::getFirstName() const { return firstName; }

// set last name
void Employee::setLastName(const string& last) { lastName = last; }

// return last name
string Employee::getLastName() const { return lastName; }

// set social security number
void Employee::setSocialSecurityNumber(const string& ssn) {
   socialSecurityNumber = ssn; // should validate
}

// return social security number
string Employee::getSocialSecurityNumber() const {
   return socialSecurityNumber;
}

// toString Employee's information (virtual, but not pure virtual)
string Employee::toString() const {
   return getFirstName() + " "s + getLastName() +
      "\nsocial security number: "s + getSocialSecurityNumber();
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
