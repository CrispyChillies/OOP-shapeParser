#include "Rectangle.h"

string Rectangle::toString(){
    stringstream builder;

    builder << "Rectangle: Width=" << _width << ", Height=" << _height;

    return builder.str();
}

string Rectangle::name() {
    return "Rectangle";
}

Rectangle::Rectangle(double x, double y) : _width{x} , _height{y} {}
double Rectangle::area(){
    return _width * _height;
}
double Rectangle::perimeter(){
    return (_width + _height) * 2;
}