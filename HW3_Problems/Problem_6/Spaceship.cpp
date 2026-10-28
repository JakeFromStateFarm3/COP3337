#include <iostream>
#include <string>
#include "Spaceship.h"

Spaceship::Spaceship(){
    x = 0;
    y = 0;
    position = "{x = " + std::to_string(x) + ", y = " + std::to_string(y) + ", Direction: 'up'}";
}

Spaceship::Spaceship(const std::string& path){
    x = 0;
    y = 0;
    std::string currentDir = "up";

    for(int i = 0; i < path.length(); i++){
        char command = path[i];
        if (command == 'R'){
            if (currentDir == "up"){
                currentDir = "right";
            }
            if (currentDir == "right"){
                currentDir = "down";
            }
            if (currentDir == "down"){
                currentDir = "left";
            }
            if (currentDir == "left"){
                currentDir = "up";
            }
        }
        else if (command == 'L'){
            if (currentDir == "up"){
                currentDir = "left";
            }
            if (currentDir == "left"){
                currentDir = "down";
            }
            if (currentDir == "down"){
                currentDir = "right";
            }
            if (currentDir == "right"){
                currentDir = "up";
            }
        }
        else if (command == 'A'){
            if (currentDir == "up"){
                y += 1;
            }
            if (currentDir == "right"){
                x += 1;
            }
            if (currentDir == "down"){
                y -= 1;
            }
            if (currentDir == "left"){
                x -= 1;
            }

        }
    }
    position = "{x = " + std::to_string(x) + ", y = " + std::to_string(y) + ", Direction: '" + currentDir + "'}";
}

std::string Spaceship::getPosition(){
    return position;
}