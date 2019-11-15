// Fig. 3.1: AccountTest.cpp
// Creating and manipulating an Account object.
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() { 
   Account myAccount; // create Account object myAccount

   // show that the initial value of myAccount's name is the empty string
   cout << "Initial account name is: " << myAccount.getName();

   // prompt for and read name
   cout << "\nPlease enter the account name: ";
   string theName;
   getline(cin, theName); // read a line of text
   myAccount.setName(theName); // put theName in myAccount

   // display the name stored in object myAccount
   cout << "Name in object myAccount is: " 
      << myAccount.getName() << endl;
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
 *************************************************************************/
