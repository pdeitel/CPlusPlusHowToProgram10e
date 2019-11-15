// Fig. 14.12: Fig14_12.cpp
// Reading a random-access file sequentially.
#include <iostream>
#include <iomanip>
#include <fstream>  
#include <cstdlib> 
#include "ClientData.h" // ClientData class definition
using namespace std;

void outputLine(ostream&, const ClientData&); // prototype

int main() {
   ifstream inCredit{"credit.dat", ios::in | ios::binary};

   // exit program if ifstream cannot open file
   if (!inCredit) {
      cerr << "File could not be opened." << endl;
      exit(EXIT_FAILURE);
   } 

   // output column heads
   cout << left << setw(10) << "Account" << setw(16) << "Last Name" 
      << setw(11) << "First Name" << setw(10) << right << "Balance\n";

   ClientData client; // create record

   // read first record from file                       
   inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));

   // read all records from file          
   while (inCredit) {
      // display record
      if (client.getAccountNumber() != 0) {
         outputLine(cout, client);
      }

      // read next from file                               
      inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
   } 
} 

// display single record
void outputLine(ostream& output, const ClientData& record) {
   output << left << setw(10) << record.getAccountNumber()
      << setw(16) << record.getLastName()
      << setw(11) << record.getFirstName()
      << setw(10) << setprecision(2) << right << fixed 
      << showpoint << record.getBalance() << endl;
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
