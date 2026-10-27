#include <iostream>

int main() {
    int num;
    int i = 0;
    int line = 0;
    int space = 0;
    int inc;
    int dec;
	std::cout << "Please input a number from 1-9." << std::endl;
    std::cin >> num;
    while (line < num){
        i = 0;
        space = (num - line) * 3; 
        while (i < space){
            std::cout << " ";
            i += 1;
        }
        line += 1;
        dec = line;
        while (dec >= 1){
            std::cout << dec;
            std::cout << "  ";
            dec -= 1;
        }
        inc = 2;
        while (inc <= line){
            std::cout << inc;
            if (inc == line){
                inc += 1;
                continue;
            }
            std::cout << "  ";
            inc += 1;
        }
        std::cout << std::endl;
    }
}
