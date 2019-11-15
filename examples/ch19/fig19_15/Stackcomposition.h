// Fig. 19.15: Stackcomposition.h
// Stack class template with a composed List object.
#ifndef STACKCOMPOSITION_H
#define STACKCOMPOSITION_H

#include "List.h" // List class definition

template< typename STACKTYPE >
class Stack {
public:
   // no constructor; List constructor does initialization

   // push calls stackList object's insertAtFront member function
   void push(const STACKTYPE& data) {
      stackList.insertAtFront(data); 
   } 

   // pop calls stackList object's removeFromFront member function
   bool pop(STACKTYPE& data) {
      return stackList.removeFromFront(data); 
   } 

   // isStackEmpty calls stackList object's isEmpty member function
   bool isStackEmpty() const {
      return stackList.isEmpty(); 
   } 

   // printStack calls stackList object's print member function
   void printStack() const {
      stackList.print(); 
   } 
private:
   List<STACKTYPE> stackList; // composed List object
}; 

#endif


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
