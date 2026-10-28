// Testing file
#include "Car.hpp"

int main(void) {
    // Create a Car object
    Car my_car = Car("Toyota", "Corrola", 2020, 23.2, 12);
    my_car.printInfo();
    my_car.refuel(72.5);
    my_car.drive(500000.6);

    return 0;
}