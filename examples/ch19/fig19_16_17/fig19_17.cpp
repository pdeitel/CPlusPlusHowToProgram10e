// Fig. 19.17: fig19_17.cpp
// Queue-processing program.
#include <iostream>
#include "Queue.h" // Queue class definition
using namespace std;

int main() {
   Queue<int> intQueue; // create Queue of integers

   cout << "processing an integer Queue" << endl;

   // enqueue integers onto intQueue
   for (int i{0}; i < 3; ++i) {
      intQueue.enqueue(i);  
      intQueue.printQueue();
   } 

   int dequeueInteger; // store dequeued integer

   // dequeue integers from intQueue
   while (!intQueue.isQueueEmpty()) {
      intQueue.dequeue(dequeueInteger);
      cout << dequeueInteger << " dequeued" << endl;
      intQueue.printQueue();
   } 

   Queue<double> doubleQueue; // create Queue of doubles
   double value{1.1};

   cout << "processing a double Queue" << endl;

   // enqueue floating-point values onto doubleQueue
   for (int j = 0; j < 3; ++j) {
      doubleQueue.enqueue(value);
      doubleQueue.printQueue();  
      value += 1.1;
   } 

   double dequeueDouble; // store dequeued double

   // dequeue floating-point values from doubleQueue
   while (!doubleQueue.isQueueEmpty()) {
      doubleQueue.dequeue(dequeueDouble);
      cout << dequeueDouble << " dequeued" << endl;
      doubleQueue.printQueue();
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
