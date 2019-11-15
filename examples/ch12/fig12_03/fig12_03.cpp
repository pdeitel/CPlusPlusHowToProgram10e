// Fig. 12.3: fig12_03.cpp
// Attempting to invoke derived-class-only member functions
// via a base-class pointer.
#include <string>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main() {
   BasePlusCommissionEmployee basePlusCommissionEmployee{
      "Bob", "Lewis", "333-33-3333", 5000, .04, 300};

   // aim base-class pointer at derived-class object (allowed)
   CommissionEmployee* commissionEmployeePtr{&basePlusCommissionEmployee};

   // invoke base-class member functions on derived-class
   // object through base-class pointer (allowed)
   string firstName{commissionEmployeePtr->getFirstName()};
   string lastName{commissionEmployeePtr->getLastName()};
   string ssn{commissionEmployeePtr->getSocialSecurityNumber()};
   double grossSales{commissionEmployeePtr->getGrossSales()};
   double commissionRate{commissionEmployeePtr->getCommissionRate()};

   // attempt to invoke derived-class-only member functions          
   // on derived-class object through base-class pointer (disallowed)
   double baseSalary{commissionEmployeePtr->getBaseSalary()};
   commissionEmployeePtr->setBaseSalary(500);
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
