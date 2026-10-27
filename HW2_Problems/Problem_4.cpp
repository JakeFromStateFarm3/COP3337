#include <iostream>
#include <random>

int diceRoll(std::mt19937& eng) {
    std::uniform_int_distribution<int> dist(1, 6);
    return dist(eng);
}
int main(void) {
    int seed;
    int num1;
    int num2;
    int sum;
    int i = 1;
    int pointSum = 0;
    std::cout << "Enter the seed ";
    std::cin >> seed;

    std::mt19937 eng(seed);

    num1 = diceRoll(eng);
    num2 = diceRoll(eng);
    sum = num1 + num2;
    while(true){
        if ((sum == 7 or sum == 11) and i == 1){
            std::cout << "You rolled " << num1 << " + " << num2 << " = " << sum << std::endl;
            std::cout << "You Win" << std::endl;
            break;
        }
        else if ((sum == 2 or sum == 3 or sum == 12) and i == 1){
            std::cout << "You rolled " << num1 << " + " << num2 << " = " << sum << std::endl;
            std::cout << "You Lose" << std::endl;
            break;
        }

        else if(sum == pointSum){
            std::cout << "You Win" << std::endl;
            break;
        }
        else if(sum == 7){
            std::cout << "You Lose" << std::endl;
            break;
        }
        else if(i == 1){
            std::cout << "You rolled " << num1 << " + " << num2 << " = " << sum << std::endl;
            pointSum = sum;
            num1 = diceRoll(eng);
            num2 = diceRoll(eng);
            sum = num1 + num2;
            std::cout << "You rolled " << num1 << " + " << num2 << " = " << sum << std::endl;
        }
        else{
            num1 = diceRoll(eng);
            num2 = diceRoll(eng);
            sum = num1 + num2;
            std::cout << "You rolled " << num1 << " + " << num2 << " = " << sum << std::endl;
        }
        i += 1;
    }
    return 0;
}