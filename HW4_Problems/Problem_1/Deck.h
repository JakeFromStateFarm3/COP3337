#ifndef DECK_H
#define DECK_H
#include "Card.h"

class Deck{
private:
    std::vector<Card> deck;
    int current_card;
    int shuffle_seed;
public:
    Deck(int seed);
    void shuffle();
    Card dealCard();
};