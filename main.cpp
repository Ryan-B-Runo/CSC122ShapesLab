#include <iostream>
#include <math.h>
#include <cassert>
#include "Circle.h"
#include "Rectangle.h"
#include "RightTriangle.h"
#include "IsocelesRightTriangle.h"
#include "Square.h"

using namespace std;

int main(){
    Circle c = Circle(3);
    Rectangle r = Rectangle(1, 2);
    RightTriangle t = RightTriangle(1,1);


    assert(c.getPerimeter() == (2*M_PI*3));
    assert(c.getArea() == (M_PI*9));

    assert(r.getPerimeter() == 6);
    assert(r.getArea() == 2);

    assert(t.getArea() == 0.5);
    assert(t.getPerimeter() == 1 + 1 + std::sqrt(1 * 1 + 1 * 1));

    IsocelesRightTriangle it = IsocelesRightTriangle(1);
    assert(it.getArea() == 0.5);
    assert(it.getPerimeter() == 1 + 1 + std::sqrt(1 * 1 + 1 * 1));

    Square s = Square(1);
    assert(s.getArea() == 1);
    assert(s.getPerimeter() ==4);

    return 0;
}