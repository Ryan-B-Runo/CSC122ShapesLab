//
// Created by nessa on 10/9/2024.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"


class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(){};
    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea() override {
        return width * height; // Area = width * height
    }

    double getPerimeter() override {
        return 2 * (width + height); // Perimeter = 2(w + h)
    }
};


#endif //RECTANGLE_H
