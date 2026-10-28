#include <iostream>
#include <string>

class stock {
private:
    std::string symbol;
    std::string name;
    double previousClosingPrice;
    double currentPrice;
public:
    stock(std::string stockSymbol, std::string stockName){
        symbol = stockSymbol;
        name = stockName;
    }
};