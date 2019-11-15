// Fig. 7.10: fig07_10.cpp
// static array initialization and automatic array initialization.
#include <iostream>
#include <array>
using namespace std;

void staticArrayInit(); // function prototype
void automaticArrayInit(); // function prototype
const size_t arraySize{3};

int main() {
   cout << "First call to each function:\n";
   staticArrayInit();
   automaticArrayInit();

   cout << "\n\nSecond call to each function:\n";
   staticArrayInit();
   automaticArrayInit();
   cout << endl;
}

// function to demonstrate a static local array
void staticArrayInit(void) {
   // initializes elements to 0 first time function is called  
   static array<int, arraySize> array1; // static local array

   cout << "\nValues on entering staticArrayInit:\n";

   // output contents of array1
   for (size_t i{0}; i < array1.size(); ++i) {
      cout << "array1[" << i << "] = " << array1[i] << "  ";
   }

   cout << "\nValues on exiting staticArrayInit:\n";

   // modify and output contents of array1
   for (size_t j{0}; j < array1.size(); ++j) {
      cout << "array1[" << j << "] = " << (array1[j] += 5) << "  ";
   }
}

// function to demonstrate an automatic local array
void automaticArrayInit(void) {
   // initializes elements each time function is called                  
   array<int, arraySize> array2{1, 2, 3}; // automatic local array

   cout << "\n\nValues on entering automaticArrayInit:\n";

   // output contents of array2
   for (size_t i{0}; i < array2.size(); ++i) {
      cout << "array2[" << i << "] = " << array2[i] << "  ";
   }

   cout << "\nValues on exiting automaticArrayInit:\n";

   // modify and output contents of array2
   for (size_t j{0}; j < array2.size(); ++j) {
      cout << "array2[" << j << "] = " << (array2[j] += 5) << "  ";
   }
}


/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
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
