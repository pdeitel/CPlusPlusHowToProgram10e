// Fig. 22.25: fig22_25.cpp
// Using strtok to tokenize a string.
#include <iostream>
#include <cstring> // prototype for strtok
using namespace std;

int main() {
   char sentence[]{"This is a sentence with 7 tokens"};

   cout << "The string to be tokenized is:\n" << sentence
      << "\n\nThe tokens are:\n\n";

   // begin tokenization of sentence
   char* tokenPtr{strtok(sentence, " ")};

   // continue tokenizing sentence until tokenPtr becomes NULL
   while (tokenPtr != NULL) {
      cout << tokenPtr << '\n';
      tokenPtr = strtok(NULL, " "); // get next token 
   } 

   cout << "\nAfter strtok, sentence = " << sentence << endl;
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
