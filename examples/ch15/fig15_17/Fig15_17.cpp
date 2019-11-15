// Fig. 15.17: fig15_17.cpp
// Standard Library multimap class template.
#include <iostream>
#include <map> // multimap class-template definition
using namespace std;

int main() {
   multimap<int, double, less<int>> pairs; // create multimap

   cout << "There are currently " << pairs.count(15)
      << " pairs with key 15 in the multimap\n";

   // insert two value_type objects in pairs
   pairs.insert(make_pair(15, 99.3));       
   pairs.insert(make_pair(15, 2.7));        

   cout << "After inserts, there are " << pairs.count(15) 
      << " pairs with key 15\n\n";

   // insert five value_type objects in pairs
   pairs.insert(make_pair(30, 111.11));      
   pairs.insert(make_pair(10, 22.22));       
   pairs.insert(make_pair(25, 33.333));      
   pairs.insert(make_pair(20, 9.345));       
   pairs.insert(make_pair(5, 77.54));        

   cout << "Multimap pairs contains:\nKey\tValue\n";

   // walk through elements of pairs                    
   for (auto mapItem : pairs) {                              
      cout << mapItem.first << '\t' << mapItem.second << '\n';
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
