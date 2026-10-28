#include <iostream>
#include <string>
#include <vector>
#ifndef CARD_H
#define CARD_H

class Card{
private:
    int face
    int suit
    static std::vector<std::string> faceNames;
    static std::vector<std::string> suitNames;
public:
    int getFace() const;
    int getSuit() const;
    Card(int face_num, int suit_num);
}