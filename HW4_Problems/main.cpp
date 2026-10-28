#include "Hand.h"

int main() {
    Deck myDeck(42);
    myDeck.shuffle();
    Hand myHand;
    myHand.takeCards(myDeck);
    myHand.print();
    std::cout << "Pair? " << myHand.pair() << std::endl;
    std::cout << "Two Pair? " << myHand.twoPair() << std::endl;
    std::cout << "Three of a kind? " << myHand.threeOfAKind() << std::endl;
    myHand.takeCards(myDeck);
    myHand.print();
}