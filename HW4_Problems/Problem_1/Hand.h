#ifndef HAND_H
#define HAND_H
#include "Deck.h"

class Hand{
private:
    std::vector<Card> hand;
public:
    void takeCards(Deck& deck_obj);
    bool isFullHand() const;
    void print();
    bool pair() const;
    bool twoPair() const;
    bool threeOfAKind() const;
};
#endif