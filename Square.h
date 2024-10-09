//
// Created by ryanb on 10/9/2024.
//

#ifndef CSC122SHAPESLAB_SQUARE_H
#define CSC122SHAPESLAB_SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
public:
    explicit Square(int side) {
        this->width = side;
        this->height = side;
    }
};


#endif //CSC122SHAPESLAB_SQUARE_H
