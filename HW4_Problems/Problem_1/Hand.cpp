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
bool Hand::pair() const{
    int counts[13] = {0};
    for(int i = 0; i < 5; i++){
        counts[hand[i].getFace()]++;
    }
    for(int i = 0; i < 13; i++){
        if (counts[i] == 2){
            return true;
        }
    }
    return false;
}
bool Hand::twoPair() const{
    int counts[13] = {0};
    int count = 0;
    for(int i = 0; i < 5; i++){
        counts[hand[i].getFace()]++;
    }
    for(int i = 0; i < 13; i++){
        if (counts[i] == 2){
            count++;
            if (count == 2){
                return true;
            }
        }
    }
    return false;
}
bool Hand::threeOfAKind() const{
    int counts[13] = {0};
    for(int i = 0; i < 5; i++){
        counts[hand[i].getFace()]++;
    }
    for(int i = 0; i < 13; i++){
        if (counts[i] == 3){
            return true;
        }
    }
    return false;
}