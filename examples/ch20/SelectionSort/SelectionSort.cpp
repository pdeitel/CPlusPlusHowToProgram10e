// Fig. 20.5: fig20_05.cpp
// Sorting an array into ascending order with selection sort.
#include <array>
#include <iomanip>
#include <iostream> 
using namespace std;

// sort an array into ascending order                                  
template <typename T, size_t size>                                     
void selectionSort(array<T, size>& items) {                            
   // loop over size - 1 elements                                      
   for (size_t i{0}; i < items.size() - 1; ++i) {                      
      size_t indexOfSmallest{i}; // will hold index of smallest element

      // loop to find index of smallest element                        
      for (size_t index{i + 1}; index < items.size(); ++index) {       
         if (items[index] < items[indexOfSmallest]) {                  
            indexOfSmallest = index;                                   
         }                                                             
      }                                                                

      // swap the elements at positions i and indexOfSmallest          
      T hold{items[i]};                                                
      items[i] = items[indexOfSmallest];                               
      items[indexOfSmallest] = hold;                                   
   }                                                                   
}                                                                      

int main() {
   const size_t arraySize{10}; 
   array<int, arraySize> data{34, 56, 4, 10, 77, 51, 93, 30, 5, 52};

   cout << "Unsorted array:\n";

   // output original array
   for (size_t i{0}; i < arraySize; ++i) {
      cout << setw(4) << data[i];
   }

   selectionSort(data); // sort the array

   cout << "\nSorted array:\n";

   // output sorted array
   for (size_t i{0}; i < arraySize; ++i) {
      cout << setw(4) << data[i];
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

