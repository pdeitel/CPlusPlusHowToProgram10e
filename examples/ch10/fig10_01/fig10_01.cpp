// Fig. 10.1: fig10_01.cpp
// Standard Library string class test program.
#include <iostream>
#include <string> 
using namespace std;

int main() {
   string s1{"happy"};
   string s2{" birthday"};
   string s3; // creates an empty string

   // test overloaded equality and relational operators
   cout << "s1 is \"" << s1 << "\"; s2 is \"" << s2
      << "\"; s3 is \"" << s3 << '\"'
      << "\n\nThe results of comparing s2 and s1:" << boolalpha
      << "\ns2 == s1 yields " << (s2 == s1)
      << "\ns2 != s1 yields " << (s2 != s1)
      << "\ns2 >  s1 yields " << (s2 > s1)
      << "\ns2 <  s1 yields " << (s2 < s1)
      << "\ns2 >= s1 yields " << (s2 >= s1)
      << "\ns2 <= s1 yields " << (s2 <= s1);

   // test string member-function empty 
   cout << "\n\nTesting s3.empty():\n";

   if (s3.empty()) {
      cout << "s3 is empty; assigning s1 to s3;\n";
      s3 = s1; // assign s1 to s3
      cout << "s3 is \"" << s3 << "\"";
   }

     // test overloaded string concatenation assignment operator
   cout << "\n\ns1 += s2 yields s1 = ";
   s1 += s2; // test overloaded concatenation
   cout << s1;

   // test string concatenation with a C string
   cout << "\n\ns1 += \" to you\" yields\n";
   s1 += " to you";
   cout << "s1 = " << s1;

   // test string concatenation with a C++14 string-object literal
   cout << "\n\ns1 += \", have a great day!\" yields\n";
   s1 += ", have a great day!"s; // s after " for string-object literal
   cout << "s1 = " << s1 << "\n\n";

   // test string member function substr
   cout << "The substring of s1 starting at location 0 for\n"
      << "14 characters, s1.substr(0, 14), is:\n"
      << s1.substr(0, 14) << "\n\n";

   // test substr "to-end-of-string" option
   cout << "The substring of s1 starting at\n"
      << "location 15, s1.substr(15), is:\n" << s1.substr(15) << "\n";

   // test copy constructor
   string s4{s1};
   cout << "\ns4 = " << s4 << "\n\n";

   // test overloaded copy assignment (=) operator with self-assignment
   cout << "assigning s4 to s4\n";
   s4 = s4;
   cout << "s4 = " << s4;

   // test using overloaded subscript operator to create lvalue
   s1[0] = 'H';
   s1[6] = 'B';
   cout << "\n\ns1 after s1[0] = 'H' and s1[6] = 'B' is:\n" 
      << s1 << "\n\n";

   // test subscript out of range with string member function "at"   
   try {
      cout << "Attempt to assign 'd' to s1.at(100) yields:\n";
      s1.at(100) = 'd'; // ERROR: subscript out of range            
   }                                                 
   catch (out_of_range& ex) {
      cout << "An exception occurred: " << ex.what() << endl;
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
