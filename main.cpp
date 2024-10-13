#include <iostream>
#include <math.h>
#include <cassert>
#include "Circle.h"
#include "Rectangle.h"
#include "RightTriangle.h"
#include "IsoscelesRightTriangle.h"
#include "Square.h"

using namespace std;

string printAreaToScreen(Shape *s){
    return s->getName() + ":\nArea: " + to_string(s->getArea());
}

int main() {
    Circle c = Circle(3);
    Rectangle r = Rectangle(1, 2);
    RightTriangle t = RightTriangle(1, 1);

    assert(c.getPerimeter() == (2 * M_PI * 3));
    assert(c.getArea() == (M_PI * 9));

    assert(r.getPerimeter() == 6);
    assert(r.getArea() == 2);

    assert(t.getArea() == 0.5);
    assert(t.getPerimeter() == 1 + 1 + std::sqrt(1 * 1 + 1 * 1));

    IsoscelesRightTriangle it = IsoscelesRightTriangle(1);
    assert(it.getArea() == 0.5);
    assert(it.getPerimeter() == 1 + 1 + std::sqrt(1 * 1 + 1 * 1));

    Square s = Square(1);
    assert(s.getArea() == 1);
    assert(s.getPerimeter() == 4);

    // printing area and name to screen
    assert(printAreaToScreen(&c) == "Circle:\nArea: 28.274334");
    assert(printAreaToScreen(&r) == "Rectangle:\nArea: " + to_string(r.getArea()));
    assert(printAreaToScreen(&t) == "RightTriangle:\nArea: " + to_string(t.getArea()));
    assert(printAreaToScreen(&it) == "IsoscelesRightTriangle:\nArea: " + to_string(it.getArea()));
    assert(printAreaToScreen(&s) == "Square:\nArea: " + to_string(s.getArea()));

    return 0;
}