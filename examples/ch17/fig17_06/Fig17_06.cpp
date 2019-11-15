// Fig. 17.6: fig17_06.cpp
// Demonstrating set_new_handler.
#include <iostream>
#include <new> // set_new_handler function prototype
#include <cstdlib> // abort function prototype
using namespace std;

// handle memory allocation failure      
void customNewHandler() {                
   cerr << "customNewHandler was called\n";
   exit(EXIT_FAILURE);                              
}    

// using set_new_handler to handle failed memory allocation
int main() {
   double *ptr[50];

   // specify that customNewHandler should be called on 
   // memory allocation failure                         
   set_new_handler(customNewHandler);                 

   // aim each ptr[i] at a big block of memory; customNewHandler will be
   // called on failed memory allocation
   for (size_t i{0}; i < 50; ++i) {
      ptr[i] = new double[50'000'000]{}; // may throw exception
      cout << "ptr[" << i << "] points to 50,000,000 new doubles\n";
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
