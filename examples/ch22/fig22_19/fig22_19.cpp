// Fig. 22.19: fig22_19.cpp
// Character-handling functions islower, isupper, tolower and toupper.
#include <iostream>
#include <cctype> // character-handling function prototypes
using namespace std;

int main() {
   cout << "According to islower:\n"
      << (islower('p') ? "p is a" : "p is not a") 
      << " lowercase letter\n"
      << (islower('P') ? "P is a" : "P is not a") 
      << " lowercase letter\n"
      << (islower('5') ? "5 is a" : "5 is not a") 
      << " lowercase letter\n"
      << (islower('!') ? "! is a" : "! is not a") 
      << " lowercase letter\n";

   cout << "\nAccording to isupper:\n"
      << (isupper('D') ? "D is an" : "D is not an") 
      << " uppercase letter\n"
      << (isupper('d') ? "d is an" : "d is not an") 
      << " uppercase letter\n"
      << (isupper('8') ? "8 is an" : "8 is not an") 
      << " uppercase letter\n"
      << (isupper('$') ? "$ is an" : "$ is not an") 
      << " uppercase letter\n";

   cout << "\nu converted to uppercase is " 
      << static_cast<char>(toupper('u'))
      << "\n7 converted to uppercase is " 
      << static_cast<char>(toupper('7'))
      << "\n$ converted to uppercase is " 
      << static_cast<char>(toupper('$'))
      << "\nL converted to lowercase is " 
      << static_cast<char>(tolower('L')) << endl;
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
