// Fig 20.3: BinarySearch.cpp
// Binary search of an array.
#include <algorithm> 
#include <array>
#include <ctime>
#include <iostream>
#include <random> 
using namespace std;

// display array elements from index low through index high
template <typename T, size_t size>
void displayElements(const array<T, size>& items, 
   size_t low, size_t high) {
   for (size_t i{0}; i < items.size() && i < low; ++i) {
      cout << "   "; // display spaces for alignment 
   }

   for (size_t i{low}; i < items.size() && i <= high; ++i) {
      cout << items[i] << " "; // display element
   }

   cout << endl;
} 

// perform a binary search on the data                             
template <typename T, size_t size>                                
int binarySearch(const array<T, size>& items, const T& key) {     
   int low{0}; // low index of elements to search                 
   int high{static_cast<int>(items.size()) - 1}; // high index
   int middle{(low + high + 1) / 2}; // middle element            
   int location{-1}; // key's index; -1 if not found              

   do { // loop to search for element                             
        // display remaining elements of array to be searched        
      displayElements(items, low, high);                         

      // output spaces for alignment                               
      for (int i{0}; i < middle; ++i) {                          
         cout << "   ";                                             
      }

      cout << " * " << endl; // indicate current middle

      // if the element is found at the middle                
      if (key == items[middle]) {                             
         location = middle; // location is the current middle 
      }                                                       
      else if (key < items[middle]) { // middle is too high   
         high = middle - 1; // eliminate the higher half      
      }                                                       
      else { // middle element is too low                     
         low = middle + 1; // eliminate the lower half        
      }                                                       

      middle = (low + high + 1) / 2; // recalculate the middle
   } while ((low <= high) && (location == -1));               

   return location; // return location of key
} 

int main() {
   // use the default random-number generation engine to produce
   // uniformly distributed pseudorandom int values from 10 to 99
   default_random_engine engine{
      static_cast<unsigned int>(time(nullptr))};
   uniform_int_distribution<unsigned int> randomInt{10, 99}; 

   const size_t arraySize{15}; // size of array 
   array<int, arraySize> arrayToSearch; // create array

   // fill arrayToSearch with random values
   for (int &item : arrayToSearch) {
      item = randomInt(engine);
   }

   sort(arrayToSearch.begin(), arrayToSearch.end()); // sort the array

   // display arrayToSearch's values
   displayElements(arrayToSearch, 0, arrayToSearch.size() - 1); 

   // get input from user
   cout << "\nPlease enter an integer value (-1 to quit): ";
   int searchKey; // value to locate 
   cin >> searchKey; // read an int from user
   cout << endl;

   // repeatedly input an integer; -1 terminates the program
   while (searchKey != -1) {
      // use binary search to try to find integer
      int position{binarySearch(arrayToSearch, searchKey)};

      // return value of -1 indicates integer was not found
      if (position == -1) {
         cout << "The integer " << searchKey << " was not found.\n";
      }
      else {
         cout << "The integer " << searchKey 
            << " was found in position " << position << ".\n";
      }

      // get input from user
      cout << "\n\nPlease enter an integer value (-1 to quit): ";
      cin >> searchKey; // read an int from user
      cout << endl;
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
 *************************************************************************/
