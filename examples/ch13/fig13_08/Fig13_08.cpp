// Fig. 13.8: Fig13_08.cpp 
// width member function of classes istream and ostream.
#include <iostream>
using namespace std;

int main() {
   int widthValue{4};
   char sentence[10];

   cout << "Enter a sentence:\n";
   cin.width(5); // input only 5 characters from sentence

   // set field width, then display characters based on that width 
   while (cin >> sentence) {
      cout.width(widthValue++);
      cout << sentence << "\n";
      cin.width(5); // input 5 more characters from sentence
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
