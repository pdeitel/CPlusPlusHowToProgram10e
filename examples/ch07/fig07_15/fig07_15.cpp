// Fig. 7.15: fig07_15.cpp
// Sorting and searching arrays.
#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm> // contains sort and binary_search
using namespace std;

int main() {
   const size_t arraySize{7}; // size of array colors
   array<string, arraySize> colors{"red", "orange", "yellow",
      "green", "blue", "indigo", "violet"};

   // output original array
   cout << "Unsorted array:\n";
   for (string color : colors) {
      cout << color << " ";
   }

   sort(colors.begin(), colors.end()); // sort contents of colors

   // output sorted array
   cout << "\nSorted array:\n";
   for (string item : colors) {
      cout << item << " ";
   }

   // search for "indigo" in colors
   bool found{binary_search(colors.begin(), colors.end(), "indigo")};
   cout << "\n\n\"indigo\" " << (found ? "was" : "was not")
      << " found in colors" << endl;

   // search for "cyan" in colors
   found = binary_search(colors.begin(), colors.end(), "cyan");
   cout << "\"cyan\" " << (found ? "was" : "was not")
      << " found in colors" << endl;
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
