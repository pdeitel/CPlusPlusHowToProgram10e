// Fig. 15.19: fig15_19.cpp
// Standard Library stack adapter class.
#include <iostream>
#include <stack> // stack adapter definition
#include <vector> // vector class-template definition
#include <list> // list class-template definition
using namespace std;

// pushElements function-template prototype
template<typename T> void pushElements(T& stackRef);

// popElements function-template prototype 
template<typename T> void popElements(T& stackRef);

int main() {
   // stack with default underlying deque
   stack<int> intDequeStack; 

   // stack with underlying vector
   stack<int, vector<int>> intVectorStack;

   // stack with underlying list          
   stack<int, list<int>> intListStack;

   // push the values 0-9 onto each stack 
   cout << "Pushing onto intDequeStack: ";
   pushElements(intDequeStack);
   cout << "\nPushing onto intVectorStack: ";
   pushElements(intVectorStack);
   cout << "\nPushing onto intListStack: ";
   pushElements(intListStack);
   cout << endl << endl;

   // display and remove elements from each stack
   cout << "Popping from intDequeStack: ";
   popElements(intDequeStack);
   cout << "\nPopping from intVectorStack: ";
   popElements(intVectorStack);
   cout << "\nPopping from intListStack: ";
   popElements(intListStack);
   cout << endl;
} 

// push elements onto stack object to which stackRef refers
template<typename T> void pushElements(T& stackRef) {
   for (int i{0}; i < 10; ++i) {
      stackRef.push(i); // push element onto stack                  
      cout << stackRef.top() << ' '; // view (and display) top element
   } 
} 

// pop elements from stack object to which stackRef refers
template<typename T> void popElements(T& stackRef) {
   while (!stackRef.empty()) {
      cout << stackRef.top() << ' '; // view (and display) top element
      stackRef.pop(); // remove top element                           
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
