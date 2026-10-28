#include "Card.h"

std::vector<std::string> Card faceNames { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
std::vector<std::string> Card suitNames {"♥", "♦", "♣", "♠"};

Card::getFace() const{
    return face;
}
Card::getSuit() const{
    return suit;
}
Card::Card(int face_num, int suit_num) {
    if ((face_num >= 0) && (face_num <= 12)){
        face = face_num;
    }
    else{
        face = 0;
    }
    if ((suit_num >= 0) && (suit_num <= 3)){
        suit = suit_num;
    }
    else{
        suit = 0;
    }
}
Card::toString() const{
    return faceNames[face] + suitNames[suit];
}