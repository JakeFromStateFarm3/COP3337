#include <iostream>
#include <string>
#include "Spaceship.h"

int main(){
    Spaceship ship1("RRRRLLLLAAAA");
    std::cout << ship1.getPosition() << std::endl;
}