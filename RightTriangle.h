//
// Created by nessa on 10/9/2024.
//

#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H
#include "Shape.h"
#include "math.h"



class RightTriangle : public Shape {
private:
    double base, height;

public:
    RightTriangle(double b, double h) : base(b), height(h) {}

    double getArea() override {
        return 0.5 * base * height; // Area = 0.5 * base * height
    }

    double getPerimeter() override {
        return base + height + std::sqrt(base * base + height * height); // Perimeter = base + height + hypotenuse
    }
};




#endif //RIGHTTRIANGLE_H
