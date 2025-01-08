#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <string>
#include <vector>

using namespace std;

class Deck {
    public:
        Deck();
        Card dealCard();
        Card drawCard();
        Card pickCard();
        void shuffleCards();
        void reShuffleCards();
        int getNumCardsLeft();
        int getNumCardsUsed();
    private:
        int numDecks;
        int numJokersPerDeck;
        vector<Card> cards;
        vector<Card> usedCards;
};

#endif
