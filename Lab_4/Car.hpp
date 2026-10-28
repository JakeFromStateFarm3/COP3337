// Hello Professor. I copied this all because the assignment said continue implementation started in class.
// .hpp header file. Keeps the description of the class. No implementation.
#include <string>

class Car {
public:
    // Constructor given args by me. Btw I'm reporting with comments what is mine because it could get hard to discerne what I did since a lot of this is copied off of canvas.
    Car(std::string make_, std::string model_, int year_, double MPG_, double fuel_capacity_);

    // printInfo method
    void printInfo() const;

    // Getters
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;

    // Setters
    void setMake(const std::string& mk);
    void setModel(const std::string& md);
    void setYear(int y);
    void setMPG(double new_mpg);

    void refuel(double gallons);
    void drive(double distance);

private:
    std::string make;
    std::string model;
    int year;
    double mpg;
    // Below this is my work
    double mileage;
    double fuel_capacity;
    double fuel_level;
};