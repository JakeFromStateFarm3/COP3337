#include "Deck.h"

Deck::Deck(seed) {
    current_card = 0;
    
    for(int i = 0; i < 13; i++){
        for(int k = 0; k < 4; k++){
            deck.push_back(Card(i, k));
        }
    }
}