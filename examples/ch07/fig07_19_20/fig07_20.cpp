// Fig. 7.20: fig07_20.cpp
// Creates GradeBook object using a two-dimensional array of grades.
#include <array>
#include "GradeBook.h" // GradeBook class definition
using namespace std;

int main() {
   // two-dimensional array of student grades
   array<array<int, GradeBook::tests>, GradeBook::students> grades{
      {87, 96, 70},
      {68, 87, 90},
      {94, 100, 90},
      {100, 81, 82},
      {83, 65, 85},
      {78, 87, 65},
      {85, 75, 83},
      {91, 94, 100},
      {76, 72, 84},
      {87, 93, 73}};
   
   GradeBook myGradeBook("CS101 Introduction to C++ Programming", grades);
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
