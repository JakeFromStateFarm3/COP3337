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
};