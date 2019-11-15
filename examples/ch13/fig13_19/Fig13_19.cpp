// Fig. 13.19: Fig13_19.cpp 
// flags member function.
#include <iostream>
using namespace std;

int main() {
   int integerValue{1000};
   double doubleValue{0.0947628};

   // display flags value, int and double values (original format)
   cout << "The value of the flags variable is: " << cout.flags()
      << "\nPrint int and double in original format:\n"
      << integerValue << '\t' << doubleValue;

   // use cout flags function to save original format     
   ios_base::fmtflags originalFormat{cout.flags()};
   cout << showbase << oct << scientific; // change format

   // display flags value, int and double values (new format)
   cout << "\n\nThe value of the flags variable is: " << cout.flags()
      << "\nPrint int and double in a new format:\n"
      << integerValue << '\t' << doubleValue;

   cout.flags(originalFormat); // restore format

   // display flags value, int and double values (original format)
   cout << "\n\nThe restored value of the flags variable is: "
      << cout.flags() << "\nPrint values in original format again:\n"
      << integerValue << '\t' << doubleValue << endl;
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
