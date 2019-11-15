// Fig. 7.14: fig07_14.cpp
// Creates GradeBook object using an array of grades.
#include <array>
#include "GradeBook.h" // GradeBook class definition
using namespace std;

int main() {
   // array of student grades
   const array<int, GradeBook::students> grades{
      87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
   string courseName{"CS101 Introduction to C++ Programming"};

   GradeBook myGradeBook(courseName, grades);
   myGradeBook.displayMessage();
   myGradeBook.processGrades();
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
