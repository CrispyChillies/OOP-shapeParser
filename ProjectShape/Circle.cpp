#include "Circle.h"

const double PI = 3.14;

string Circle::toString(){
    stringstream builder;

    builder << "Circle: Radius=" << _radius;

    return builder.str();
}

std::string Circle::name() {
    return "Circle";
}

Circle::Circle(double r) : _radius{r} {}
double Circle::area(){
    return PI * _radius * _radius;
}
double Circle::perimeter(){
    return 2 * PI * _radius;
}