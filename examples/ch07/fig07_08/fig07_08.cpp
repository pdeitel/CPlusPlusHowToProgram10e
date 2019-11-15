// Fig. 7.8: fig07_08.cpp
// Die-rolling program using an array instead of switch.
#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>
using namespace std;

int main() {
   // use the default random-number generation engine to
   // produce uniformly distributed pseudorandom int values from 1 to 6
   default_random_engine engine(static_cast<unsigned int>(time(0)));
   uniform_int_distribution<unsigned int> randomInt(1, 6);

   const size_t arraySize{7}; // ignore element zero
   array<unsigned int, arraySize> frequency{}; // initialize to 0s

   // roll die 60,000,000 times; use die value as frequency index
   for (unsigned int roll{1}; roll <= 60'000'000; ++roll) {
      ++frequency[randomInt(engine)];
   }

   cout << "Face" << setw(13) << "Frequency" << endl;

   // output each array element's value
   for (size_t face{1}; face < frequency.size(); ++face) {
      cout << setw(4) << face << setw(13) << frequency[face] << endl;
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
