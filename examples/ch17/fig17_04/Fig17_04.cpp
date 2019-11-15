// Fig. 17.4: fig17_04.cpp
// Demonstrating stack unwinding.
#include <iostream>
#include <stdexcept>     
using namespace std;

// function3 throws runtime error
void function3() {
   cout << "In function 3" << endl;

   // no try block, stack unwinding occurs, return control to function2
   throw runtime_error{"runtime_error in function3"}; // no print
} 

// function2 invokes function3
void function2() {
   cout << "function3 is called inside function2" << endl;
   function3(); // stack unwinding occurs, return control to function1
} 

// function1 invokes function2
void function1() {
   cout << "function2 is called inside function1" << endl;
   function2(); // stack unwinding occurs, return control to main
} 

// demonstrate stack unwinding
int main() {
   // invoke function1
   try {
      cout << "function1 is called inside main" << endl;
      function1(); // call function1 which throws runtime_error
   } 
   catch (const runtime_error& error) { // handle runtime error
      cout << "Exception occurred: " << error.what() << endl;
      cout << "Exception handled in main" << endl;
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
