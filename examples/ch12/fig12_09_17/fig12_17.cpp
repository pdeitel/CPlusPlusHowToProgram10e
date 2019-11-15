// Fig. 12.17: fig12_17.cpp
// Processing Employee derived-class objects with static binding 
// then polymorphically using dynamic binding.
#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h" 
#include "CommissionEmployee.h"  
#include "BasePlusCommissionEmployee.h" 
using namespace std;

void virtualViaPointer(const Employee* const); // prototype
void virtualViaReference(const Employee&); // prototype

int main() {
   cout << fixed << setprecision(2); // set floating-point formatting

   // create derived-class objects                        
   SalariedEmployee salariedEmployee{
      "John", "Smith", "111-11-1111", 800};
   CommissionEmployee commissionEmployee{
      "Sue", "Jones", "333-33-3333", 10000, .06};
   BasePlusCommissionEmployee basePlusCommissionEmployee{
      "Bob", "Lewis", "444-44-4444", 5000, .04, 300};

   // output each Employee’s information and earnings using static binding
   cout << "EMPLOYEES PROCESSED INDIVIDUALLY USING STATIC BINDING\n"
      << salariedEmployee.toString()
      << "\nearned $" << salariedEmployee.earnings() << "\n\n"
      << commissionEmployee.toString()
      << "\nearned $" << commissionEmployee.earnings() << "\n\n"
      << basePlusCommissionEmployee.toString()
      << "\nearned $" << basePlusCommissionEmployee.earnings() << "\n\n";

   // create and initialize vector of three base-class pointers        
   vector<Employee *> employees{&salariedEmployee, &commissionEmployee,
      &basePlusCommissionEmployee};

   cout << "EMPLOYEES PROCESSED POLYMORPHICALLY VIA DYNAMIC BINDING\n\n";

   // call virtualViaPointer to print each Employee's information
   // and earnings using dynamic binding
   cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS POINTERS\n";

   for (const Employee* employeePtr : employees) {
      virtualViaPointer(employeePtr);
   }

   // call virtualViaReference to print each Employee's information 
   // and earnings using dynamic binding
   cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS REFERENCES\n";

   for (const Employee* employeePtr : employees) {
      virtualViaReference(*employeePtr); // note dereferencing
   }
}

// call Employee virtual functions toString and earnings off a   
// base-class pointer using dynamic binding                   
void virtualViaPointer(const Employee* const baseClassPtr) {
   cout << baseClassPtr->toString()
      << "\nearned $" << baseClassPtr->earnings() << "\n\n";
}

// call Employee virtual functions toString and earnings off a  
// base-class reference using dynamic binding                
void virtualViaReference(const Employee& baseClassRef) {
   cout << baseClassRef.toString()
      << "\nearned $" << baseClassRef.earnings() << "\n\n";
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
