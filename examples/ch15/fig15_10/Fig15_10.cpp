// Fig. 15.10: Fig15_10.cpp
// Standard Library vector class template.
#include <iostream>
#include <vector> // vector class-template definition
using namespace std;

// prototype for function template printVector
template <typename T> void printVector(const vector<T>& integers2);

int main() {
   vector<int> integers; // create vector of ints

   cout << "The initial size of integers is: " << integers.size()
      << "\nThe initial capacity of integers is: " << integers.capacity();

   // function push_back is in vector, deque and list
   integers.push_back(2);                            
   integers.push_back(3);                            
   integers.push_back(4);                            

   cout << "\nThe size of integers is: " << integers.size()
      << "\nThe capacity of integers is: " << integers.capacity();
   cout << "\n\nOutput built-in array using pointer notation: ";
   const size_t SIZE{6}; // define array size
   int values[SIZE]{1, 2, 3, 4, 5, 6}; // initialize values

   // display array using pointer notation
   for (const int* ptr = cbegin(values); ptr != cend(values); ++ptr) {
      cout << *ptr << ' ';
   }

   cout << "\nOutput vector using iterator notation: ";
   printVector(integers);
   cout << "\nReversed contents of vector integers: ";

   // display vector in reverse order using const_reverse_iterator
   for (auto reverseIterator = integers.crbegin();               
      reverseIterator != integers.crend(); ++reverseIterator) {    
      cout << *reverseIterator << ' ';                            
   }                                                              

   cout << endl;
}

// function template for outputting vector elements  
template <typename T> void printVector(const vector<T>& integers2) {
   // display vector elements using const_iterator         
   for (auto constIterator = integers2.cbegin();            
      constIterator != integers2.cend(); ++constIterator) {
      cout << *constIterator << ' ';                       
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
