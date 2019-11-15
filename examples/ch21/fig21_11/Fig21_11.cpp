// Fig. 21.11: Fig21_11.cpp
// Using an ostringstream object.
#include <iostream>
#include <string>
#include <sstream> // header for string stream processing
using namespace std;

int main() {
   ostringstream outputString; // create ostringstream object

   string string1{"Output of several data types "};
   string string2{"to an ostringstream object:"};
   string string3{"\n        double: "};
   string string4{"\n           int: "};
   string string5{"\naddress of int: "};

   double double1{123.4567};
   int integer{22};

   // output strings, double and int to ostringstream outputString
   outputString << string1 << string2 << string3 << double1       
      << string4 << integer << string5 << &integer;               

   // call str to obtain string contents of the ostringstream
   cout << "outputString contains:\n" << outputString.str(); 

   // add additional characters and call str to output string
   outputString << "\nmore characters added";                
   cout << "\n\nafter additional stream insertions,\n"
      << "outputString contains:\n" << outputString.str() << endl;
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
