// Fig. 4.7: StudentTest.cpp
// Create and test Student objects.
#include <iostream> 
#include "Student.h"
using namespace std;

int main() {
   Student account1{"Jane Green", 93};
   Student account2{"John Blue", 72}; 

   cout << account1.getName() << "'s letter grade equivalent of " 
      << account1.getAverage() << " is: " 
      << account1.getLetterGrade() << "\n";  
   cout << account2.getName() << "'s letter grade equivalent of " 
      << account2.getAverage() << " is: "
      << account2.getLetterGrade() << endl;      
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
 *************************************************************************/