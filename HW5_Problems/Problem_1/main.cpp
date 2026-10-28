#include "Person.hpp"

int main() {
    Person pPer("Clemintine", 21);
    Person pPer2(pPer);
    pPer.~Person();
    pPer2.display();
    pPer2.~Person();
}