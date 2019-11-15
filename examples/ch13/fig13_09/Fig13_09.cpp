// Fig. 13.9: Fig13_09.cpp
// Creating and testing user-defined, nonparameterized 
// stream manipulators.
#include <iostream>
using namespace std;

// bell manipulator (using escape sequence \a)
ostream& bell(ostream& output) {
   return output << '\a'; // issue system beep
}

// carriageReturn manipulator (using escape sequence \r)
ostream& carriageReturn(ostream& output) {
   return output << '\r'; // issue carriage return      
}

// tab manipulator (using escape sequence \t)
ostream& tab(ostream& output) {
   return output << '\t'; // issue tab       
}

// endLine manipulator (using escape sequence \n and flush stream
// manipulator to simulate endl)
ostream& endLine(ostream& output) {
   return output << '\n' << flush; // issue endl-like end of line
}

int main() {
   // use tab and endLine manipulators
   cout << "Testing the tab manipulator:" << endLine
      << 'a' << tab << 'b' << tab << 'c' << endLine;

   cout << "Testing the carriageReturn and bell manipulators:"
      << endLine << "..........";

   cout << bell; // use bell manipulator

   // use carriageReturn and endLine manipulators
   cout << carriageReturn << "-----" << endLine;
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
