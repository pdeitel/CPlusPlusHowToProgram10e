// Fig. 10.8: fig10_08.cpp
// Date class test program.
#include <iostream>
#include "Date.h" // Date class definition
using namespace std;

int main() {
   Date d1{12, 27, 2010}; // December 27, 2010
   Date d2; // defaults to January 1, 1900

   cout << "d1 is " << d1 << "\nd2 is " << d2;
   cout << "\n\nd1 += 7 is " << (d1 += 7);

   d2.setDate(2, 28, 2008);
   cout << "\n\n  d2 is " << d2;
   cout << "\n++d2 is " << ++d2 << " (leap year allows 29th)";

   Date d3{7, 13, 2010};

   cout << "\n\nTesting the prefix increment operator:\n"
      << "  d3 is " << d3 << endl;
   cout << "++d3 is " << ++d3 << endl;
   cout << "  d3 is " << d3;

   cout << "\n\nTesting the postfix increment operator:\n"
      << "  d3 is " << d3 << endl;
   cout << "d3++ is " << d3++ << endl;
   cout << "  d3 is " << d3 << endl;
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
