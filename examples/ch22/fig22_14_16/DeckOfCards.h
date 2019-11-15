// Fig. 22.14: DeckOfCards.h
// Definition of class DeckOfCards that 
// represents a deck of playing cards.
#include <array>

// BitCard structure definition with bit fields
struct BitCard {                               
   unsigned face : 4; // 4 bits; 0-15          
   unsigned suit : 2; // 2 bits; 0-3           
   unsigned color : 1; // 1 bit; 0-1           
};                      

// DeckOfCards class definition
class DeckOfCards {
public:
   static const int faces{13};
   static const int colors{2}; // black and red
   static const int numberOfCards{52};

   DeckOfCards(); // constructor initializes deck
   void deal() const; // deals cards in deck
private:
   std::array<BitCard, numberOfCards> deck; // represents deck of cards
}; 



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
