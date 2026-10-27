#include <iostream>

int evenCount(unsigned int value);
int main(void) {
    unsigned int num;
    std::cout << "Please enter any integer." << std::endl;
    std::cin >> num;
    if (num == 0){
        std::cout << "The number of even digit is: 1" << std::endl;
    }
    else{
        std::cout << "The number of even digit is: " << evenCount(num) << std::endl;
    }
}
int evenCount(unsigned int value){
    if (value == 0){
        return 0;
    }
    int last_digit = value % 10;
    int isEven = (last_digit % 2 == 0) ? 1 : 0;
    return isEven + evenCount(value / 10);
}