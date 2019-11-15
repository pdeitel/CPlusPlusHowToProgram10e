// Fig. 10.5: fig10_05.cpp
// Demonstrating class PhoneNumber's overloaded stream insertion 
// and stream extraction operators.
#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main() {
   PhoneNumber phone; // create object phone

   cout << "Enter phone number in the form (555) 555-5555:" << endl;

   // cin >> phone invokes operator>> by implicitly issuing
   // the non-member function call operator>>(cin, phone)
   cin >> phone;

   cout << "\nThe phone number entered was:\n";

   // cout << phone invokes operator<< by implicitly issuing
   // the non-member function call operator<<(cout, phone)
   cout << phone << endl;
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
