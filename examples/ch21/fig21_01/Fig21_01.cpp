// Fig. 21.1: Fig21_01.cpp
// Demonstrating string assignment and concatenation.
#include <iostream>
#include <string> 
using namespace std;

int main() {
   string string1{"cat"};                          
   string string2; // initialized to the empty string
   string string3; // initialized to the empty string

   string2 = string1; // assign string1 to string2      
   string3.assign(string1); // assign string1 to string3
   cout << "string1: " << string1 << "\nstring2: " << string2
      << "\nstring3: " << string3 << "\n\n";

   // modify string2 and string3     
   string2[0] = string3[2] = 'r';

   cout << "After modification of string2 and string3:\n" << "string1: " 
      << string1 << "\nstring2: " << string2 << "\nstring3: ";

   // demonstrating member function at
   for (size_t i{0}; i < string3.size(); ++i) {
      cout << string3.at(i); // can throw out_of_range exception
   }

   // declare string4 and string5
   string string4{string1 + "apult"}; // concatenation
   string string5; // initialized to the empty string

   // overloaded +=                               
   string3 += "pet"; // create "carpet"         
   string1.append("acomb"); // create "catacomb"

   // append subscript locations 4 through end of string1 to
   // create string "comb" (string5 was initially empty)    
   string5.append(string1, 4, string1.size() - 4);      

   cout << "\n\nAfter concatenation:\nstring1: " << string1 
      << "\nstring2: " << string2 << "\nstring3: " << string3 
      << "\nstring4: " << string4 << "\nstring5: " << string5 << endl;
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
