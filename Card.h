#ifndef CARD_H
#define CARD_H

#include <string>

using namespace std;

/**
* The class that will be used model a card within a deck of cards
*/
class Card {
    public:
        /**
        * The constructor for a card
        */
        Card();
        /**
        * A getter for the suit of a card
        */
        string getSuit();
        /**
        * A getter for the value of a card
        */
        string getValue();
        /**
        * A to string method for '{value} of {suit}'
        */
        string toString();
        /**
        * A comparison override to compare whether two cards
        * have the same suit/value
        */
        bool operator==(Card c);
    private:
        /**
        * The value that a card is (Ace, King, 7, etc.)
        */
        string value;
        /**
        * The suit that a card is (Hearts, Spades, Diamonds, Clubs)
        */
        string suit;
};

#endif
