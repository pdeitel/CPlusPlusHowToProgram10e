// Fig. 10.11: Array.cpp
// Array class member- and friend-function definitions.
#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Array.h" // Array class definition
using namespace std;

// default constructor for class Array (default size 10)
Array::Array(int arraySize)
   : size{(arraySize > 0 ? static_cast<size_t>(arraySize) :
        throw invalid_argument{"Array size must be greater than 0"})},
     ptr{new int[size]{}} { /* empty body */ }

// copy constructor for class Array;
// must receive a reference to an Array
Array::Array(const Array& arrayToCopy)
   : size{arrayToCopy.size}, ptr{new int[size]} {
   for (size_t i{0}; i < size; ++i) {
      ptr[i] = arrayToCopy.ptr[i]; // copy into object
   }
}

// destructor for class Array
Array::~Array() {
   delete[] ptr; // release pointer-based array space
}

// return number of elements of Array
size_t Array::getSize() const {
   return size; // number of elements in Array
}

// overloaded assignment operator;
// const return avoids: (a1 = a2) = a3
const Array& Array::operator=(const Array& right) {
   if (&right != this) { // avoid self-assignment
      // for Arrays of different sizes, deallocate original
      // left-side Array, then allocate new left-side Array
      if (size != right.size) {
         delete[] ptr; // release space
         size = right.size; // resize this object
         ptr = new int[size]; // create space for Array copy
      }

      for (size_t i{0}; i < size; ++i) {
         ptr[i] = right.ptr[i]; // copy array into object
      }
   }

   return *this; // enables x = y = z, for example
}

// determine if two Arrays are equal and
// return true, otherwise return false
bool Array::operator==(const Array& right) const {
   if (size != right.size) {
      return false; // arrays of different number of elements
   }

   for (size_t i{0}; i < size; ++i) {
      if (ptr[i] != right.ptr[i]) {
         return false; // Array contents are not equal
      }
   }

   return true; // Arrays are equal
}

// overloaded subscript operator for non-const Arrays;
// reference return creates a modifiable lvalue
int& Array::operator[](int subscript) {
   // check for subscript out-of-range error
   if (subscript < 0 || subscript >= size) {
      throw out_of_range{"Subscript out of range"};
   }

   return ptr[subscript]; // reference return
}

// overloaded subscript operator for const Arrays
// const reference return creates an rvalue
int Array::operator[](int subscript) const {
   // check for subscript out-of-range error
   if (subscript < 0 || subscript >= size) {
      throw out_of_range{"Subscript out of range"};
   }

   return ptr[subscript]; // returns copy of this element
}

// overloaded input operator for class Array;
// inputs values for entire Array
istream& operator>>(istream& input, Array& a) {
   for (size_t i{0}; i < a.size; ++i) {
      input >> a.ptr[i];
   }

   return input; // enables cin >> x >> y;
}

// overloaded output operator for class Array 
ostream& operator<<(ostream& output, const Array& a) {
   // output private ptr-based array 
   for (size_t i{0}; i < a.size; ++i) {
      output << a.ptr[i] << "  ";
   }

   output << endl;
   return output; // enables cout << x << y;
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
