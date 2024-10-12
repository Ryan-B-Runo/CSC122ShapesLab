#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <math.h>

class Circle : public Shape{
private:
    double radius;
    string name = "Circle";;

public:
    Circle(){};
    explicit Circle(double r) : radius(r) {}

    double getArea() override {
        return M_PI * radius * radius; // Area = πr²
    }

    double getPerimeter() override {
        return 2 * M_PI * radius; // Perimeter = 2πr
    }
    string getName(){
        return name;
    }
};

#endif //CIRCLE_H