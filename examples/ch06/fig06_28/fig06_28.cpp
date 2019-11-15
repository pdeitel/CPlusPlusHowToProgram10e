// Fig. 6.28: fig06_28.cpp
// Iterative function factorial.
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned int); // function prototype

int main() {
   // calculate the factorials of 0 through 10
   for (unsigned int counter{0}; counter <= 10; ++counter) {
      cout << setw(2) << counter << "! = " << factorial(counter) 
         << endl;
   }
} 

// iterative method factorial
unsigned long factorial(unsigned int number) {
   unsigned long result{1};

   // iterative factorial calculation 
   for (unsigned int i{number}; i >= 1; --i) {
      result *= i;
   }

   return result;
} 



/*************************************************************************
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
*************************************************************************/
