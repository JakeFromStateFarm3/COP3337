#include <iostream>
#include <math.h>

class Circle2d{
public:
    double x;
    double y;
    double radius;
    static int numberOfCircles;

    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    double getRadius(){
        return radius;
    }
    static int getNumberOfCircles(){
        return numberOfCircles;
    }
    Circle2d(double x, double y, double radius){
        this->x = x;
        this->y = y;
        this->radius = radius;
        numberOfCircles += 1;
    }
    Circle2d(const Circle2d& circle){
        this->x = circle.x;
        this->y = circle.y;
        this->radius = circle.radius;
        numberOfCircles += 1;
    }
    ~Circle2d(){
        numberOfCircles--;
    }
    bool overlaps(const Circle2d& circle){
        double distance = std::sqrt(std::pow(x - circle.x, 2) + std::pow(y - circle.y, 2));
        return distance < (radius + circle.radius);
    }
};