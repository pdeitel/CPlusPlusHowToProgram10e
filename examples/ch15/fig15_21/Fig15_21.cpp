// Fig. 15.21: fig15_21.cpp
// Standard Library priority_queue adapter class.
#include <iostream>
#include <queue> // priority_queue adapter definition
using namespace std;

int main() {
   priority_queue<double> priorities; // create priority_queue

   // push elements onto priorities
   priorities.push(3.2);         
   priorities.push(9.8);         
   priorities.push(5.4);         

   cout << "Popping from priorities: ";

   // pop element from priority_queue
   while (!priorities.empty()) {
      cout << priorities.top() << ' '; // view top element
      priorities.pop(); // remove top element             
   } 

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
