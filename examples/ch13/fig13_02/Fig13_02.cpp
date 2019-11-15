// Fig. 13.2: Fig13_02.cpp 
// get, put and eof member functions.
#include <iostream>
using namespace std;

int main() {
   int character; // use int, because char cannot represent EOF

   // prompt user to enter line of text
   cout << "Before input, cin.eof() is " << cin.eof()
      << "\nEnter a sentence followed by Enter and end-of-file:\n";

   // use get to read each character; use put to display it
   while ((character = cin.get()) != EOF) {
      cout.put(character);
   }

   // display end-of-file character
   cout << "\nEOF in this system is: " << character
      << "\nAfter input of EOF, cin.eof() is " << cin.eof() << endl;
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
