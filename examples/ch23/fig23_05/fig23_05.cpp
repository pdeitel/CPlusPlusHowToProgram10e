// Fig. 23.5: fig23_05.cpp
// Demonstrating operator keywords.
#include <iostream>
#include <ciso646> // enables operator keywords in Microsoft Visual C++
using namespace std;

int main()
{
   bool a = true;
   bool b = false;
   int c = 2;
   int d = 3;

   // sticky setting that causes bool values to display as true or false
   cout << boolalpha;

   cout << "a = " << a << "; b = " << b
      << "; c = " << c << "; d = " << d;

   cout << "\n\nLogical operator keywords:";
   cout << "\n   a and a: " << ( a and a );
   cout << "\n   a and b: " << ( a and b );
   cout << "\n    a or a: " << ( a or a );
   cout << "\n    a or b: " << ( a or b );
   cout << "\n     not a: " << ( not a );
   cout << "\n     not b: " << ( not b );
   cout << "\na not_eq b: " << ( a not_eq b );

   cout << "\n\nBitwise operator keywords:";
   cout << "\nc bitand d: " << ( c bitand d );
   cout << "\n c bitor d: " << ( c bitor d );
   cout << "\n   c xor d: " << ( c xor d );
   cout << "\n   compl c: " << ( compl c );
   cout << "\nc and_eq d: " << ( c and_eq d );
   cout << "\n c or_eq d: " << ( c or_eq d );
   cout << "\nc xor_eq d: " << ( c xor_eq d ) << endl;
} // end main

/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
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
