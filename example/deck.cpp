#include "deck.h"
#include <algorithm>
#include <iostream>

Deck::Deck()
{
    for (int intCards = 1; intCards <= 52; intCards++)
    {
        vtrDeck.push_back(Card(intCards));
    }
    shuffle();
    intCurrentCardIndex = 0;
}

Deck::~Deck()
{
    vtrDeck.clear();
}

Card Deck::getCard()
{
    if (intCurrentCardIndex + 1 >= vtrDeck.size())
    {
        std::cerr << "Deck dealt last card. Use shouldShuffle to prevent dealing too many cards." << std::endl;
        return vtrDeck.at(intCurrentCardIndex);
    }
    return vtrDeck.at(intCurrentCardIndex++);
}
void Deck::shuffle()
{
    intCurrentCardIndex = 0;
    std::random_shuffle(vtrDeck.begin(), vtrDeck.end());
}

bool Deck::shouldShuffle()
{
    int intShufflePoint = (52 * intShufflePercent) / 100;
    return (intCurrentCardIndex > intShufflePoint) ? true : false;
}
