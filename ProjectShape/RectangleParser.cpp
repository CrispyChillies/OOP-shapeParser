#include "RectangleParser.h"    

Object* RectangleParser::parse(string rect)
{
    string widthPart;

    stringstream iss(rect);
    getline(iss,widthPart,',');

    int firstPos = rect.find_first_of('=');
    int lastPos = rect.find_last_of('=');

    string w = widthPart.substr(firstPos + 1);
    string h = rect.substr(lastPos + 1);

    double width;
    double height;

    try {
        width = stod(w);
        height = stod(h);
    }
    catch (exception& ex) {
        return nullptr;
    }


    return new Rectangle(width,height);
}