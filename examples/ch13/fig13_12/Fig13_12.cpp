// Fig. 13.12: Fig13_12.cpp 
// Left and right justification with stream manipulators left and right.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int x{12345};

   // display x right justified (default)
   cout << "Default is right justified:\n\"" << setw(10) << x << "\"";

   // use left manipulator to display x left justified
   cout << "\n\nUse left to left justify x:\n\""
      << left << setw(10) << x << "\"";

   // use right manipulator to display x right justified
   cout << "\n\nUse right to right justify x:\n\""
      << right << setw(10) << x << "\"" << endl;
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
