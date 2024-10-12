cmake_minimum_required(VERSION 3.29)
project(CSC122ShapesLab)

set(CMAKE_CXX_STANDARD 14)

add_executable(CSC122ShapesLab
        main.cpp
        Circle.h
        Shape.h
        Rectangle.h
        RightTriangle.h
        Square.h
        IsoscelesRightTriangle.h
        IsoscelesRightTriangle.cpp
)