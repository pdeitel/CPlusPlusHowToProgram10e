// Fig. 19.20: fig19_20.cpp
// Creating and traversing a binary tree.
#include <iostream>
#include <iomanip>
#include "Tree.h" // Tree class definition
using namespace std;

int main() {
   Tree<int> intTree; // create Tree of int values

   cout << "Enter 10 integer values:\n";

   // insert 10 integers to intTree
   for (int i{0}; i < 10; ++i) {
      int intValue = 0;
      cin >> intValue;
      intTree.insertNode(intValue);
   } 

   cout << "\nPreorder traversal\n";
   intTree.preOrderTraversal();

   cout << "\nInorder traversal\n";
   intTree.inOrderTraversal();

   cout << "\nPostorder traversal\n";
   intTree.postOrderTraversal();

   Tree<double> doubleTree; // create Tree of double values

   cout << fixed << setprecision(1) 
      << "\n\n\nEnter 10 double values:\n";

   // insert 10 doubles to doubleTree
   for (int j{0}; j < 10; ++j) {
      double doubleValue = 0.0;
      cin >> doubleValue;
      doubleTree.insertNode(doubleValue);
   } 

   cout << "\nPreorder traversal\n";
   doubleTree.preOrderTraversal();

   cout << "\nInorder traversal\n";
   doubleTree.inOrderTraversal();

   cout << "\nPostorder traversal\n";
   doubleTree.postOrderTraversal();
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
