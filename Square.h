#ifndef CSC122SHAPESLAB_SQUARE_H
#define CSC122SHAPESLAB_SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
public:
    explicit Square(int side) {
        this->width = side;
        this->height = side;
        this->name = "Square";
    }
};

#endif //CSC122SHAPESLAB_SQUARE_H
