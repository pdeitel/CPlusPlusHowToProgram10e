// Fig. 14.8: ClientData.h
// Class ClientData definition used in Fig. 14.10–Fig. 14.13.
#ifndef CLIENTDATA_H
#define CLIENTDATA_H

#include <string>

class ClientData {
public:
   // default ClientData constructor
   ClientData(int = 0, const std::string& = "",
      const std::string& = "", double = 0.0);

   // accessor functions for accountNumber
   void setAccountNumber(int);
   int getAccountNumber() const;

   // accessor functions for lastName
   void setLastName(const std::string&);
   std::string getLastName() const;

   // accessor functions for firstName
   void setFirstName(const std::string&);
   std::string getFirstName() const;

   // accessor functions for balance
   void setBalance(double);
   double getBalance() const;
private:
   int accountNumber;
   char lastName[15];
   char firstName[10];
   double balance;
};

#endif


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
