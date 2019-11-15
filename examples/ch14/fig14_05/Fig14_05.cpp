// Fig. 14.5: Fig14_05.cpp
// Reading and printing a sequential file.
#include <iostream>
#include <fstream> // file stream        
#include <iomanip>
#include <string>
#include <cstdlib> 
using namespace std;

void outputLine(int, const string&, double); // prototype

int main() {
   // ifstream constructor opens the file          
   ifstream inClientFile("clients.txt", ios::in);

   // exit program if ifstream could not open file
   if (!inClientFile) {
      cerr << "File could not be opened" << endl;
      exit(EXIT_FAILURE);
   }

   cout << left << setw(10) << "Account" << setw(13)
      << "Name" << "Balance\n" << fixed << showpoint;

   int account; // the account number
   string name; // the account owner's name
   double balance; // the account balance

   // display each record in file
   while (inClientFile >> account >> name >> balance) {
      outputLine(account, name, balance);
   }
}

// display single record from file
void outputLine(int account, const string& name, double balance) {
   cout << left << setw(10) << account << setw(13) << name
      << setw(7) << setprecision(2) << right << balance << endl;
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
