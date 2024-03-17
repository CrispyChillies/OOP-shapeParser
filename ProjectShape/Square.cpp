#include "Square.h"

string Square::toString(){
    stringstream builder;

    builder << "Square: Side=" << _a;

    return builder.str();
}

string Square::name() {
    return "Square";
}

Square::Square(double edge) : _a{edge} {}
double Square::area(){
    return _a * _a;
}

double Square::perimeter(){
    return 4 * _a;
}