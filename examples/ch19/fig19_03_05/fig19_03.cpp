// Fig. 19.3: fig19_03.cpp
// Manipulating a linked list.
#include <iostream>
#include <string>
#include "List.h" // List class definition
using namespace std;

// display program instructions to user
void instructions() {
   cout << "Enter one of the following:\n"
      << "  1 to insert at beginning of list\n" 
      << "  2 to insert at end of list\n" 
      << "  3 to delete from beginning of list\n" 
      << "  4 to delete from end of list\n" 
      << "  5 to end list processing\n";
} 

// function to test a List
template<typename T>
void testList(List<T>& listObject, const string& typeName) {
   cout << "Testing a List of " << typeName << " values\n";
   instructions(); // display instructions

   int choice; // store user choice
   T value; // store input value

   do { // perform user-selected actions
      cout << "? ";
      cin >> choice;

      switch (choice) {
      case 1: // insert at beginning
         cout << "Enter " << typeName << ": ";
         cin >> value;
         listObject.insertAtFront(value);
         listObject.print();             
         break;
      case 2: // insert at end
         cout << "Enter " << typeName << ": ";
         cin >> value;
         listObject.insertAtBack(value);
         listObject.print();            
         break;
      case 3: // remove from beginning
         if (listObject.removeFromFront(value)) {
            cout << value << " removed from list\n";
         }

         listObject.print();
         break;
      case 4: // remove from end
         if (listObject.removeFromBack(value)) {
            cout << value << " removed from list\n";
         }

         listObject.print();
         break;
      } 
   } while (choice < 5); 

   cout << "End list test\n\n";
} 

int main() {
   // test List of int values
   List<int> integerList;
   testList(integerList, "integer"); 

   // test List of double values
   List<double> doubleList;
   testList(doubleList, "double"); 
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
