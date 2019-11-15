// Fig. 18.3: fig18_03.cpp
// Passing a Stack template object  
// to a function template.
#include <iostream>
#include <string>
#include "Stack.h" // Stack class template definition
using namespace std;

// function template to manipulate Stack<T>                
template<typename T>                                       
void testStack(                                             
   Stack<T>& theStack, // reference to Stack<T>          
   const T& value, // initial value to push                  
   const T& increment, // increment for subsequent values    
   size_t size, // number of items to push                   
   const string& stackName) { // name of the Stack<T> object
   cout << "\nPushing elements onto " << stackName << '\n'; 
   T pushValue{value};

   // push element onto Stack                               
   for (size_t i{0}; i < size; ++i) {
      theStack.push(pushValue); // push element onto Stack
      cout << pushValue << ' ';
      pushValue += increment;
   } 

   cout << "\n\nPopping elements from " << stackName << '\n'; 

   // pop elements from Stack                               
   while (!theStack.isEmpty()) { // loop while Stack is not empty
      cout << theStack.top() << ' ';
      theStack.pop(); // remove top element
   } 

   cout << "\nStack is empty. Cannot pop." << endl;                
}                                

int main() {
   Stack<double> doubleStack; 
   const size_t doubleStackSize{5};
   testStack(doubleStack, 1.1, 1.1, doubleStackSize, "doubleStack");

   Stack<int> intStack; 
   const size_t intStackSize{10};
   testStack(intStack, 1, 1, intStackSize, "intStack");
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
