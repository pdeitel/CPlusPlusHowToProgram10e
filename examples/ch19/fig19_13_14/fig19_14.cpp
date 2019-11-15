// Fig. 19.14: fig19_14.cpp
// A simple stack program.
#include <iostream>
#include "Stack.h" // Stack class definition
using namespace std;

int main() {
   Stack<int> intStack; // create Stack of ints

   cout << "processing an integer Stack" << endl;

   // push integers onto intStack
   for (int i{0}; i < 3; ++i) {
      intStack.push(i);     
      intStack.printStack();
   } 

   int popInteger; // store int popped from stack

   // pop integers from intStack
   while (!intStack.isStackEmpty()) {
      intStack.pop(popInteger);
      cout << popInteger << " popped from stack" << endl;
      intStack.printStack();
   } 

   Stack<double> doubleStack; // create Stack of doubles
   double value{1.1};

   cout << "processing a double Stack" << endl;

   // push floating-point values onto doubleStack
   for (int j{0}; j < 3; ++j) {
      doubleStack.push(value); 
      doubleStack.printStack();
      value += 1.1;
   } 

   double popDouble; // store double popped from stack

   // pop floating-point values from doubleStack
   while (!doubleStack.isStackEmpty()) {
      doubleStack.pop(popDouble);
      cout << popDouble << " popped from stack" << endl;
      doubleStack.printStack();
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
