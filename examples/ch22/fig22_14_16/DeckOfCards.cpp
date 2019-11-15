// Fig. 22.15: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <iostream>
#include <iomanip>
#include "DeckOfCards.h" // DeckOfCards class definition
using namespace std;

// no-argument DeckOfCards constructor intializes deck
DeckOfCards::DeckOfCards() {
   for (size_t i{0}; i < deck.size(); ++i) {
      deck[i].face = i % faces; // faces in order               
      deck[i].suit = i / faces; // suits in order               
      deck[i].color = i / (faces * colors); // colors in order
   } 
} 

// deal cards in deck
void DeckOfCards::deal() const {
   for (size_t k1{0}, k2{k1 + deck.size() / 2}; 
   k1 < deck.size() / 2 - 1; ++k1, ++k2) {
      cout << "Card:" << setw(3) << deck[k1].face
         << "  Suit:" << setw(2) << deck[k1].suit
         << "  Color:" << setw(2) << deck[k1].color
         << "   " << "Card:" << setw(3) << deck[k2].face
         << "  Suit:" << setw(2) << deck[k2].suit
         << "  Color:" << setw(2) << deck[k2].color << endl;
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
