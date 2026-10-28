// Hello Professor. I copied this all because the assignment said continue implementation started in class. 
#include <iostream>
#include <string>

#include "Car.hpp"

// Constructor changed by me

Car::Car(std::string make_, std::string model_, int year_, double MPG_, double fuel_capacity_) {
    make = make_;
    model = model_;
    year = year_;
    mpg = MPG_;
    fuel_capacity = fuel_capacity_;
    mileage = 0.0;
    fuel_level = 0.0;
}

void Car::printInfo() const {
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "MPG: " << mpg << std::endl;
    std::cout << "Fuel: " << fuel_level << std::endl;
}

// Implement getters and setters
// Everything below is written by me.

std::string Car::getMake() const{
    return make;
}

std::string Car::getModel() const{
    return model;
}

int Car::getYear() const{
    return year;
}

double Car::getMPG() const{
    return mpg;
}

void Car::setMake(const std::string& mk){
    make = mk;
}

void Car::setModel(const std::string& md){
    model = md;
}

void Car::setYear(int y){
    year = y;
}

void Car::setMPG(double new_mpg){
    mpg = new_mpg;
}

void Car::refuel(double gallons){
    fuel_level += gallons;
    std::cout << "Refueling..." << std::endl;
    
    if (fuel_level > fuel_capacity) {
        fuel_level -= gallons;
        std::cout << "Fuel added: " << fuel_capacity - fuel_level << " gallons" << std::endl;
        std::cout << "Excess fuel: " << gallons - (fuel_capacity - fuel_level) << " gallons" << std::endl;
        fuel_level = fuel_capacity;        
        std::cout << "Fuel level: " << fuel_level << " gallons" << std::endl;
    }
    else{
        std::cout << "Fuel added: " << gallons << " gallons" << std::endl;
        std::cout << "Fuel level: " << fuel_level << " gallons" << std::endl;
    }
}

void Car::drive(double distance){
    if (distance > (fuel_level * mpg)){
        std::cout << "Distance covered: " << fuel_level * mpg << "(" << distance - (fuel_level * mpg) << " left)" << std::endl;
        fuel_level = 0;
        std::cout << "Fuel level: " << fuel_level << std::endl;
    }
    else{
        std::cout << "Distance covered: " << distance << std::endl;
        fuel_level -= distance/mpg;
        std::cout << "Fuel level: " << fuel_level << std::endl;
    }
}