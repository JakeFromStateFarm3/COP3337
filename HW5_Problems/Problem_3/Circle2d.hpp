#include <iostream>

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
    }
    Circle2d(const Circle2d& circle){
        this->x = circle.x;
        this->y = circle.y;
        this->radius = circle.radius;
    }    
};