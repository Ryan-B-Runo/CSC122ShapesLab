cmake_minimum_required(VERSION 3.29)
project(CSC122ShapesLab)

set(CMAKE_CXX_STANDARD 14)

add_executable(CSC122ShapesLab
        main.cpp
        test.cpp
        Circle.cpp
        Circle.h
        Shape.h
        Rectangle.cpp
        Rectangle.h
        RightTriangle.cpp
        RightTriangle.h
)