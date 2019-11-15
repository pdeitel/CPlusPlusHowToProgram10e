// Fig. 23.1: fig23_01.cpp
// Demonstrating const_cast.
#include <iostream>
#include <cstring> // contains prototypes for functions strcmp and strlen
#include <cctype> // contains prototype for function toupper
using namespace std;

// returns the larger of two C strings
const char *maximum( const char *first, const char *second )
{
   return ( strcmp( first, second ) >= 0 ? first : second );
} // end function maximum

int main()
{
   char s1[] = "hello"; // modifiable array of characters
   char s2[] = "goodbye"; // modifiable array of characters

   // const_cast required to allow the const char * returned by maximum
   // to be assigned to the char * variable maxPtr
   char *maxPtr = const_cast< char * >( maximum( s1, s2 ) );

   cout << "The larger string is: " << maxPtr << endl;

   for ( size_t i = 0; i < strlen( maxPtr ); ++i )
      maxPtr[ i ] = toupper( maxPtr[ i ] );

   cout << "The larger string capitalized is: " << maxPtr << endl;
} // end main


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
