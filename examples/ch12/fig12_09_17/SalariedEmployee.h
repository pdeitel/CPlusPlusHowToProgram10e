// Fig. 12.11: SalariedEmployee.h
// SalariedEmployee class derived from Employee.
#ifndef SALARIED_H
#define SALARIED_H

#include <string> // C++ standard string class
#include "Employee.h" // Employee class definition

class SalariedEmployee : public Employee {
public:
   SalariedEmployee(const std::string&, const std::string&,
      const std::string&, double = 0.0);
   virtual ~SalariedEmployee() = default; // virtual destructor

   void setWeeklySalary(double); // set weekly salary
   double getWeeklySalary() const; // return weekly salary

   // keyword virtual signals intent to override               
   virtual double earnings() const override; // calculate earnings        
   virtual std::string toString() const override; // string representation
private:
   double weeklySalary; // salary per week
};

#endif // SALARIED_H


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
