#include <iostream>
#include <string>

class Spaceship {
private:
    int x;
    int y;
    std::string position = "x: X, y: Y, direction: {'DIRECTION'}";
public:
    Spaceship();
    Spaceship(const std::string& path);
    std::string getPosition();
};