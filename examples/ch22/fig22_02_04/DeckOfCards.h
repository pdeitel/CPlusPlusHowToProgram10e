// Fig. 22.2: DeckOfCards.h
// Definition of class DeckOfCards that 
// represents a deck of playing cards.
#include <string>
#include <array>

// Card structure definition
struct Card {               
   std::string face;
   std::string suit;
};   

// DeckOfCards class definition
class DeckOfCards {
public:
   static const int numberOfCards{52};
   static const int faces{13};
   static const int suits{4};

   DeckOfCards(); // constructor initializes deck
   void shuffle(); // shuffles cards in deck
   void deal() const; // deals cards in deck

private:
   std::array<Card, numberOfCards> deck; // represents deck of cards
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
