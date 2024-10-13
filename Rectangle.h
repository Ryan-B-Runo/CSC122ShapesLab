#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {

public:
    double width, height;
    string name;

    Rectangle(){};
    Rectangle(double w, double h) : width(w), height(h){
        name = "Rectangle";
    }

    double getArea() override {
        return width * height; // Area = width * height
    }

    double getPerimeter() override {
        return 2 * (width + height); // Perimeter = 2(w + h)
    }
    string getName() override{
        return name;
    }
};

#endif //RECTANGLE_H
