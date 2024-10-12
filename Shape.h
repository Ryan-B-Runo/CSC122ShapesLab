#ifndef CSC122SHAPESLAB_SHAPE_H
#define CSC122SHAPESLAB_SHAPE_H

#include <string>

using namespace std;

class Shape {
public:
    virtual ~Shape() = default;

    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
    virtual string getName() = 0;
};

#endif //CSC122SHAPESLAB_SHAPE_H
