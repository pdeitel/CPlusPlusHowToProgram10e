// Fig. 12.12: SalariedEmployee.cpp
// SalariedEmployee class member-function definitions.
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "SalariedEmployee.h" // SalariedEmployee class definition
using namespace std;

// constructor 
SalariedEmployee::SalariedEmployee(const string& first,
   const string& last, const string& ssn, double salary)
   : Employee(first, last, ssn) {
   setWeeklySalary(salary);
}

// set salary
void SalariedEmployee::setWeeklySalary(double salary) {
   if (salary < 0.0) {
      throw invalid_argument("Weekly salary must be >= 0.0");
   }

   weeklySalary = salary;
}

// return salary
double SalariedEmployee::getWeeklySalary() const { return weeklySalary; }

// calculate earnings; 
// override pure virtual function earnings in Employee
double SalariedEmployee::earnings() const { return getWeeklySalary(); }

// return a string representation of SalariedEmployee's information 
string SalariedEmployee::toString() const {
   ostringstream output;
   output << fixed << setprecision(2);
   output << "salaried employee: "
      << Employee::toString() // reuse abstract base-class function
      << "\nweekly salary: " << getWeeklySalary();
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
