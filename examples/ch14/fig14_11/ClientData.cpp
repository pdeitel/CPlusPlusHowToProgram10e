// Fig. 14.9: ClientData.cpp
// Class ClientData stores customer's credit information.
#include <string>
#include "ClientData.h"
using namespace std;

// default ClientData constructor
ClientData::ClientData(int accountNumberValue, const string& lastName, 
   const string& firstName, double balanceValue)
   : accountNumber(accountNumberValue), balance(balanceValue) {
   setLastName(lastName);
   setFirstName(firstName);
} 

// get account-number value
int ClientData::getAccountNumber() const {return accountNumber;}

// set account-number value
void ClientData::setAccountNumber(int accountNumberValue) {
   accountNumber = accountNumberValue; // should validate
} 

// get last-name value
string ClientData::getLastName() const {return lastName;}

// set last-name value
void ClientData::setLastName(const string& lastNameString) {
   // copy at most 15 characters from string to lastName
   size_t length{lastNameString.size()};               
   length = (length < 15 ? length : 14);
   lastNameString.copy(lastName, length);
   lastName[length] = '\0'; // append null character to lastName
} 

// get first-name value
string ClientData::getFirstName() const {return firstName;}

// set first-name value
void ClientData::setFirstName(const string& firstNameString) {
   // copy at most 10 characters from string to firstName
   size_t length{firstNameString.size()};
   length = (length < 10 ? length : 9);
   firstNameString.copy(firstName, length);
   firstName[length] = '\0'; // append null character to firstName
} 

// get balance value
double ClientData::getBalance() const {return balance;}

// set balance value
void ClientData::setBalance(double balanceValue) {balance = balanceValue;}


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
