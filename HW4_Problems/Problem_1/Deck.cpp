#include "Deck.h"
#include <random>
#include <utility>

Deck::Deck(int seed) {
    current_card = 0;
    shuffle_seed = seed;
    for(int i = 0; i < 13; i++){
        for(int k = 0; k < 4; k++){
            deck.push_back(Card(i, k));
        }
    }
}
void Deck::shuffle() {
    std::mt19937 eng(shuffle_seed);
    std::uniform_int_distribution<int> dist(0, 51);
    for(int i = 0; i < deck.size(); i++){
        int random_val = dist(eng);
        std::swap(deck[i], deck[random_val]);
    }
}
Card Deck::dealCard() {
    current_card += 1;
    return deck[current_card - 1];
}
bool Deck::moreCards() const{
    if (current_card > 51){
        return false;
    }
    else{
        return true;
    }
}