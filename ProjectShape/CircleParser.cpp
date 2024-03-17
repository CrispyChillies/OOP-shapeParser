#include "CircleParser.h"

Object* CircleParser::parse(string circle)
{
    size_t firstPos = circle.find_first_of('=');
    double radius;
    try {
        radius = stod(circle.substr(firstPos + 1));
    }catch(exception& ex){
        return nullptr;
    }

    return new Circle(radius);
}
