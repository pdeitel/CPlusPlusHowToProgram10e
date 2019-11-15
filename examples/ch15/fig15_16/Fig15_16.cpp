// Fig. 15.16: fig15_16.cpp
// Standard Library set class template.
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator> // ostream_iterator
using namespace std;

int main() {
   vector<double> a{2.1, 4.2, 9.5, 2.1, 3.7};   
   set<double, less<double>> doubleSet{a.begin(), a.end()};

   cout << "doubleSet contains: ";
   ostream_iterator<double> output{cout, " "};
   copy(doubleSet.begin(), doubleSet.end(), output);

   // insert 13.8 in doubleSet; insert returns pair in which
   // p.first represents location of 13.8 in doubleSet and  
   // p.second represents whether 13.8 was inserted         
   auto p{doubleSet.insert(13.8)}; // value not in set   
   cout << "\n\n" << *(p.first) 
      << (p.second ? " was" : " was not") << " inserted";
   cout << "\ndoubleSet contains: ";
   copy(doubleSet.begin(), doubleSet.end(), output);

   // insert 9.5 in doubleSet                          
   p = doubleSet.insert(9.5); // value already in set
   cout << "\n\n" << *(p.first) 
      << (p.second ? " was" : " was not") << " inserted";
   cout << "\ndoubleSet contains: ";
   copy(doubleSet.begin(), doubleSet.end(), output);
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
