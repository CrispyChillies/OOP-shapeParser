#include <iostream>
#include <iomanip>
#include "PrintTable.h"

PrintTable::PrintTable(vector<int> x) : _widths{x} {}

string PrintTable::paddString(string s, int width) {
    std::string paddedString = s;
    if (paddedString.length() < width) {
        paddedString = paddedString + std::string(width - paddedString.length(), ' ');  // Right-pad with spaces
    }
    return paddedString.substr(0, width);
}

vector<string> PrintTable::ShapeToRowConverter(IShape* shape) {
    vector<string> row;
    stringstream builderForPeri;
    stringstream builderForAre;

    string perimeter;
    string area;

    builderForPeri << "Perimeter=" << fixed << setprecision(1) << shape->perimeter();
    builderForAre << "Area=" << fixed << setprecision(2) <<shape->area();

    perimeter = builderForPeri.str();
    area = builderForAre.str();

    row.push_back(paddString(shape->name(), _widths[0]));
    row.push_back(paddString(perimeter, _widths[1]));
    row.push_back(paddString(area, _widths[2]));

    return row;
}


void PrintTable::PrintOut(vector<IShape*> shapes, int numberOfShapes) {
    vector<string> completeRow;
    vector<string> singleRow;

    for (int i = 0; i < shapes.size(); i++) {
        stringstream builder;
        singleRow = ShapeToRowConverter(shapes[i]);
        builder << singleRow[0] << "|" << singleRow[1] << "|" << singleRow[2] << "|";
        completeRow.push_back(builder.str());
    }

    for (int i = 0; i < completeRow.size(); i++) {
        cout << "|" << i + 1 << "|" << completeRow[i] << endl;
    }
}