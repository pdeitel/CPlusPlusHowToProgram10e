// Fig. 7.13: GradeBook.h
// Definition of class GradeBook that uses an array to store test grades.
#include <string> 
#include <array>
#include <iostream> 
#include <iomanip> // parameterized stream manipulators

// GradeBook class definition
class GradeBook {
public:
   // constant number of students who took the test
   static const size_t students{10}; // note public datas

   // constructor initializes courseName and grades array
   GradeBook(const std::string& name,
      const std::array<int, students>& gradesArray)
      : courseName{name}, grades{gradesArray} {
   }

   // function to set the course name
   void setCourseName(const std::string& name) {
      courseName = name; // store the course name
   }

   // function to retrieve the course name
   const std::string& getCourseName() const {
      return courseName;
   }

   // display a welcome message to the GradeBook user
   void displayMessage() const {
      // call getCourseName to get the name of this GradeBook's course
      std::cout << "Welcome to the grade book for\n" << getCourseName()
         << "!" << std::endl;
   }

   // perform various operations on the data (none modify the data)
   void processGrades() const {
      outputGrades(); // output grades array

      // call function getAverage to calculate the average grade
      std::cout << std::setprecision(2) << std::fixed;
      std::cout << "\nClass average is " << getAverage() << std::endl;

      // call functions getMinimum and getMaximum
      std::cout << "Lowest grade is " << getMinimum()
         << "\nHighest grade is " << getMaximum() << std::endl;

      outputBarChart(); // display grade distribution chart
   }

   // find minimum grade
   int getMinimum() const {
      int lowGrade{100}; // assume lowest grade is 100

      // loop through grades array
      for (int grade : grades) {
         // if current grade lower than lowGrade, assign it to lowGrade
         if (grade < lowGrade) {
            lowGrade = grade; // new lowest grade
         }
      }

      return lowGrade; // return lowest grade
   }

   // find maximum grade
   int getMaximum() const {
      int highGrade{0}; // assume highest grade is 0

      // loop through grades array
      for (int grade : grades) {
         // if current grade higher than highGrade, assign it to highGrade
         if (grade > highGrade) {
            highGrade = grade; // new highest grade
         }
      }

      return highGrade; // return highest grade
   }

   // determine average grade for test
   double getAverage() const {
      int total{0}; // initialize total

      // sum grades in array
      for (int grade : grades) {
         total += grade;
      }

      // return average of grades
      return static_cast<double>(total) / grades.size();
   }

   // output bar chart displaying grade distribution
   void outputBarChart() const {
      std::cout << "\nGrade distribution:" << std::endl;

      // stores frequency of grades in each range of 10 grades
      const size_t frequencySize{11};
      std::array<unsigned int, frequencySize> frequency{}; // init to 0s

      // for each grade, increment the appropriate frequency
      for (int grade : grades) {
         ++frequency[grade / 10];
      }

      // for each grade frequency, print bar in chart
      for (size_t count{0}; count < frequencySize; ++count) {
         // output bar labels ("0-9:", ..., "90-99:", "100:")
         if (0 == count) {
            std::cout << "  0-9: ";
         }
         else if (10 == count) {
            std::cout << "  100: ";
         }
         else {
            std::cout << count * 10 << "-" << (count * 10) + 9 << ": ";
         }

         // print bar of asterisks
         for (unsigned int stars{0}; stars < frequency[count]; ++stars) {
            std::cout << '*';
         }

         std::cout << std::endl; // start a new line of output
      }
   }

   // output the contents of the grades array
   void outputGrades() const {
      std::cout << "\nThe grades are:\n\n";

      // output each student's grade
      for (size_t student{0}; student < grades.size(); ++student) {
         std::cout << "Student " << std::setw(2) << student + 1 << ": "
            << std::setw(3) << grades[student] << std::endl;
      }
   }
private:
   std::string courseName; // course name for this grade book
   std::array<int, students> grades; // array of student grades
};


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
