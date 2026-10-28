#include "My_Set.hpp"

int main() {
    My_Set set1(20);
    set1.insertElement(13);
    set1.insertElement(7);
    set1.insertElement(20);
    set1.insertElement(21);
    set1.printSet();
    My_Set set2(100);
    set2.printSet();
    My_Set set3(set1);
    std::cout << set3.isEqualTo(set1);
}