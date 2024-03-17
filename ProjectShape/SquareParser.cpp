#include "SquareParser.h"

Object* SquareParser::parse(string square)
{
    int firstPos = square.find_first_of('=');
    double edge;

    try {
        edge = stod(square.substr(firstPos + 1));
    }
    catch (exception& ex) {
        return nullptr;
    }

    return new Square(edge);

}