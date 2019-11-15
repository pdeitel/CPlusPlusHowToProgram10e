// Fig. 12.6: fig12_06.cpp
// Introducing polymorphism, virtual functions and dynamic binding.
#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h" 
using namespace std;

int main() {
   // create base-class object
   CommissionEmployee commissionEmployee{
      "Sue", "Jones", "222-22-2222", 10000, .06};

   // create derived-class object
   BasePlusCommissionEmployee basePlusCommissionEmployee{
      "Bob", "Lewis", "333-33-3333", 5000, .04, 300};

   cout << fixed << setprecision(2); // set floating-point formatting

   // output objects using static binding
   cout << "INVOKING TOSTRING FUNCTION ON BASE-CLASS AND DERIVED-CLASS "
      << "\nOBJECTS WITH STATIC BINDING\n"
      << commissionEmployee.toString() // static binding
      << "\n\n"
      << basePlusCommissionEmployee.toString(); // static binding

   // output objects using dynamic binding
   cout << "\n\nINVOKING TOSTRING FUNCTION ON BASE-CLASS AND "
      << "\nDERIVED-CLASS OBJECTS WITH DYNAMIC BINDING";

   // natural: aim base-class pointer at base-class object        
   const CommissionEmployee* commissionEmployeePtr{&commissionEmployee};
   cout << "\n\nCALLING VIRTUAL FUNCTION TOSTRING WITH BASE-CLASS POINTER"
      << "\nTO BASE-CLASS OBJECT INVOKES BASE-CLASS "
      << "TOSTRING FUNCTION:\n"
      << commissionEmployeePtr->toString(); // base version

   // natural: aim derived-class pointer at derived-class object
   const BasePlusCommissionEmployee* basePlusCommissionEmployeePtr{
      &basePlusCommissionEmployee}; // natural                  
   cout << "\n\nCALLING VIRTUAL FUNCTION TOSTRING WITH DERIVED-CLASS "
      << "POINTER\nTO DERIVED-CLASS OBJECT INVOKES DERIVED-CLASS "
      << "TOSTRING FUNCTION:\n"
      << basePlusCommissionEmployeePtr->toString(); // derived version

   // aim base-class pointer at derived-class object   
   commissionEmployeePtr = &basePlusCommissionEmployee;
   cout << "\n\nCALLING VIRTUAL FUNCTION TOSTRING WITH BASE-CLASS POINTER"
      << "\nTO DERIVED-CLASS OBJECT INVOKES DERIVED-CLASS "
      << "TOSTRING FUNCTION:\n";

   // polymorphism; invokes BasePlusCommissionEmployee's toString
   // via base-class pointer to derived-class object             
   cout << commissionEmployeePtr->toString() << endl;
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
