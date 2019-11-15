// Fig. 14.2: Fig14_02.cpp
// Creating a sequential file.
#include <iostream>
#include <string>
#include <fstream> // contains file stream processing types
#include <cstdlib> // exit function prototype              
using namespace std;

int main() {
   // ofstream constructor opens file                
   ofstream outClientFile{"clients.txt", ios::out};

   // exit program if unable to create file
   if (!outClientFile) { // overloaded ! operator
      cerr << "File could not be opened" << endl;
      exit(EXIT_FAILURE);
   }

   cout << "Enter the account, name, and balance.\n"
      << "Enter end-of-file to end input.\n? ";

   int account; // the account number
   string name; // the account owner's name
   double balance; // the account balance

                   // read account, name and balance from cin, then place in file
   while (cin >> account >> name >> balance) {
      outClientFile << account << ' ' << name << ' ' << balance << endl;
      cout << "? ";
   }
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
