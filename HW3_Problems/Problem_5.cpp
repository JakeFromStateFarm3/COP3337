#include <iostream>
#include <string>

class Stock {
private:
    std::string symbol;
    std::string name;
    double previousClosingPrice;
    double currentPrice;
public:
    Stock(std::string stockSymbol, std::string stockName) {
        symbol = stockSymbol;
        name = stockName;
    }

    std::string getSym() const {
        return symbol;
    }

    std::string getName() const {
        return name;
    }

    double getClosePrice() const {
        return previousClosingPrice;
    }

    double getCurrentPrice() const {
        return currentPrice;
    }

    void setClosePrice(double pastPrice) {
        previousClosingPrice = pastPrice;
    }

    void setCurrentPrice(double price) {
        currentPrice = price;
    }

    double getChangePercent(){
        return ((currentPrice / previousClosingPrice) - 1) * 100;
        
    }
};

int main() {
    Stock stock1("symbol1", "name1");
    stock1.setClosePrice(27.5);
    stock1.setCurrentPrice(27.6);
    std::cout << "Previous Closing Price: " << stock1.getClosePrice() << std::endl;
    std::cout << "Current Price: " << stock1.getCurrentPrice() << std::endl;
    std::cout << "Percentage Change: " << stock1.getChangePercent() << std::endl;
}