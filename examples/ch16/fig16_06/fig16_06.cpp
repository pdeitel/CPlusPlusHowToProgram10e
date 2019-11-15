// Fig. 16.6: fig16_06.cpp
// Mathematical algorithms of the Standard Library.
#include <iostream>
#include <algorithm> // algorithm definitions  
#include <numeric> // accumulate is defined here
#include <array>
#include <iterator> 
#include <random> // contains C++11 random number generation features
using namespace std;

int main() {
   const size_t SIZE{10};
   array<int, SIZE> a1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   ostream_iterator<int> output{cout, " "};

   cout << "a1 before random_shuffle: ";
   copy(a1.cbegin(), a1.cend(), output);

   // create random-number engine and use it to help shuffle a1's elements
   default_random_engine randomEngine{random_device{}()};                 
   shuffle(a1.begin(), a1.end(), randomEngine); // randomly order elements
   cout << "\na1 after random_shuffle: ";
   copy(a1.cbegin(), a1.cend(), output);

   array<int, SIZE> a2{100, 2, 8, 1, 50, 3, 8, 8, 9, 10};
   cout << "\n\na2 contains: ";
   copy(a2.cbegin(), a2.cend(), output);

   // count number of elements in a2 with value 8  
   auto result = count(a2.cbegin(), a2.cend(), 8);
   cout << "\nNumber of elements matching 8: " << result;

   // count number of elements in a2 that are greater than 9
   result = count_if(a2.cbegin(), a2.cend(), [](auto x){return x > 9;});
   cout << "\nNumber of elements greater than 9: " << result;

   // locate minimum element in a2
   cout << "\n\nMinimum element in a2 is: "
      << *(min_element(a2.cbegin(), a2.cend()));

   // locate maximum element in a2
   cout << "\nMaximum element in a2 is: "
      << *(max_element(a2.cbegin(), a2.cend()));

   // locate minimum and maximum elements in a2
   auto minAndMax = minmax_element(a2.cbegin(), a2.cend());
   cout << "\nThe minimum and maximum elements in a2 are "
      << *minAndMax.first << " and " << *minAndMax.second
      << ", respectively";

   // calculate sum of elements in a1
   cout << "\n\nThe total of the elements in a1 is: "
      << accumulate(a1.cbegin(), a1.cend(), 0);

   array<int, SIZE> cubes; // instantiate cubes

   // calculate cube of each element in a1; place results in cubes
   transform(a1.cbegin(), a1.cend(), cubes.begin(),
      [](auto x){return x * x * x;});              
   cout << "\n\nThe cube of every integer in a1 is:\n";
   copy(cubes.cbegin(), cubes.cend(), output);
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
