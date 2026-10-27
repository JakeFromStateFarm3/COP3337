#include <iostream>
#include <string>
#include <vector>

std::string my_join(const std::vector<std::string>& words, std::string separ);

int main(void) {
    std::vector<std::string> word;
    std::string exits;
    std::string separator;
    std::cout << "Enter strings (\"exit\" to stop)" << std::endl;
    while (true){
        std::cin >> exits;
        if (exits == "exit"){
            break;
        }
        else{
            word.push_back(exits);
        }
    }
    std::cout << "Enter the separator" << std::endl;
    std::cin >> separator;
    std::cout << my_join(word, separator) << std::endl;
}
std::string my_join(const std::vector<std::string>& words, std::string separ) {
    std::string joined_string = words[0];
    for (int i = 1; i < words.size(); i++){
        joined_string += separ + words[i];
    }
    return joined_string;
}