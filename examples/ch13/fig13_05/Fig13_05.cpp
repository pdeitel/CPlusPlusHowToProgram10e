// Fig. 13.5: Fig13_05.cpp 
// Unformatted I/O using read, gcount and write.
#include <iostream>
using namespace std;

int main() {
   const int SIZE{80};
   char buffer[SIZE]; // create array of 80 characters

   // use function read to input characters into buffer
   cout << "Enter a sentence:\n";
   cin.read(buffer, 20);

   // use functions write and gcount to display buffer characters
   cout << "\nThe sentence entered was:\n";
   cout.write(buffer, cin.gcount());
   cout << endl;
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
