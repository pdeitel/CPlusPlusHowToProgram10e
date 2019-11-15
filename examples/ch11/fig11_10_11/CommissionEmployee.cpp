// Fig. 11.5: CommissionEmployee.cpp
// Class CommissionEmployee member-function definitions.
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "CommissionEmployee.h" // CommissionEmployee class definition
using namespace std;

// constructor                                                        
CommissionEmployee::CommissionEmployee(const string& first,
   const string &last, const string &ssn, double sales, double rate) {
   firstName = first; // should validate                              
   lastName = last; // should validate                                
   socialSecurityNumber = ssn; // should validate                     
   setGrossSales(sales); // validate and store gross sales            
   setCommissionRate(rate); // validate and store commission rate     
}

// set first name
void CommissionEmployee::setFirstName(const string& first) {
   firstName = first; // should validate
}

// return first name
string CommissionEmployee::getFirstName() const { return firstName; }

// set last name
void CommissionEmployee::setLastName(const string& last) {
   lastName = last; // should validate
}

// return last name
string CommissionEmployee::getLastName() const { return lastName; }

// set social security number
void CommissionEmployee::setSocialSecurityNumber(const string& ssn) {
   socialSecurityNumber = ssn; // should validate
}

// return social security number
string CommissionEmployee::getSocialSecurityNumber() const {
   return socialSecurityNumber;
}

// set gross sales amount
void CommissionEmployee::setGrossSales(double sales) {
   if (sales < 0.0) {
      throw invalid_argument("Gross sales must be >= 0.0");
   }

   grossSales = sales;
}

// return gross sales amount
double CommissionEmployee::getGrossSales() const { return grossSales; }

// set commission rate
void CommissionEmployee::setCommissionRate(double rate) {
   if (rate <= 0.0 || rate >= 1.0) {
      throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
   }

   commissionRate = rate;
}

// return commission rate
double CommissionEmployee::getCommissionRate() const {
   return commissionRate;
}

// calculate earnings                        
double CommissionEmployee::earnings() const {
   return commissionRate * grossSales;
}

// return string representation of CommissionEmployee object        
string CommissionEmployee::toString() const {
   ostringstream output;
   output << fixed << setprecision(2); // two digits of precision   
   output << "commission employee: " << firstName << " " << lastName
      << "\nsocial security number: " << socialSecurityNumber
      << "\ngross sales: " << grossSales
      << "\ncommission rate: " << commissionRate;
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
