#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Shape.h"
#include "math.h"


class RightTriangle : public Shape {
public:
    double base, height;
    string name = "RightTriangle";

public:
    RightTriangle() {};

    RightTriangle(double b, double h) : base(b), height(h) {}

    double getArea() override {
        return 0.5 * base * height; // Area = 0.5 * base * height
    }

    double getPerimeter() override {
        return base + height + std::sqrt(base * base + height * height); // Perimeter = base + height + hypotenuse
    }

    string getName() override {
        return name;
    }
};

#endif //RIGHTTRIANGLE_H
