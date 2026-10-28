#include "Hand.h"

void Hand::takeCards(Deck& deck_obj) {
    hand.clear();
    for(int i = 0; i < 5; i++){
        if (deck_obj.moreCards()){
            hand.push_back(deck_obj.dealCard());
        }
    }
}
bool Hand::isFullHand() const{
    if (hand.size() == 5){
        return true;
    }
    else{
        return false;
    }
}
void Hand::print() {
    for(int i = 0; i < 5; i++){
        std::cout << hand[i].toString();
    } 
}