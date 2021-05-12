#ifndef DECK_H
#define DECK_H
#include <vector>
#include "card.h"

class Deck {
    public:
        Deck();
        ~Deck();
        Card getCard();
        void shuffle();
        bool shouldShuffle();

    private:
        int intShufflePercent = 75;
        int intCurrentCardIndex = 0;
        std::vector<Card> vtrDeck;

};

#endif