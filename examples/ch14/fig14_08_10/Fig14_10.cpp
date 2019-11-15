// Fig. 14.10: Fig14_10.cpp
// Creating a randomly accessed file.
#include <iostream>
#include <fstream>  
#include <cstdlib> 
#include "ClientData.h" // ClientData class definition
using namespace std;

int main() {
   ofstream outCredit{"credit.dat", ios::out | ios::binary};

   // exit program if ofstream could not open file
   if (!outCredit) {
      cerr << "File could not be opened." << endl;
      exit(EXIT_FAILURE);
   } 

   ClientData blankClient; // constructor zeros out each data member

   // output 100 blank records to file
   for (int i{0}; i < 100; ++i) {
      outCredit.write(                                                    
         reinterpret_cast<const char*>(&blankClient), sizeof(ClientData));
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
