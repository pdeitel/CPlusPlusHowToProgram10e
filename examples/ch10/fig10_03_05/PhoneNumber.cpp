// Fig. 10.4: PhoneNumber.cpp
// Overloaded stream insertion and stream extraction operators
// for class PhoneNumber.
#include <iomanip>
#include "PhoneNumber.h"
using namespace std;

// overloaded stream insertion operator; cannot be a member function
// if we would like to invoke it with cout << somePhoneNumber; 
ostream& operator<<(ostream& output, const PhoneNumber& number) {
   output << "Area code: " << number.areaCode << "\nExchange: "
      << number.exchange << "\nLine: " << number.line << "\n"
      << "(" << number.areaCode << ") " << number.exchange << "-"
      << number.line << "\n";
   return output; // enables cout << a << b << c;                
}

// overloaded stream extraction operator; cannot be a member function
// if we would like to invoke it with cin >> somePhoneNumber;
istream& operator>>(istream& input, PhoneNumber& number) {
   input.ignore(); // skip (                               
   input >> setw(3) >> number.areaCode; // input area code
   input.ignore(2); // skip ) and space                   
   input >> setw(3) >> number.exchange; // input exchange 
   input.ignore(); // skip dash (-)                         
   input >> setw(4) >> number.line; // input line         
   return input; // enables cin >> a >> b >> c;             
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
