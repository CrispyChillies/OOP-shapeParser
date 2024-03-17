#include <iostream>
#include <string>
#include <vector>
#include "RectangleParser.h"
#include "SquareParser.h"
#include "CircleParser.h"
#include "ParserFactory.h"
#include "Utils.h"
#include "FileReaderDLL.h"
#include "PrintInfo.h"
#include "PrintTable.h"
#include "Sorting.h"


using namespace std;

int main() {
    FileReader f;
    auto lines = f.read("shapes.txt");

    ParserFactory factory;
    factory.registerWith(new RectangleParser());
    factory.registerWith(new SquareParser());
    factory.registerWith(new CircleParser());

    vector<IShape*> shapes;

    for (string line : lines) {
		// Example: line = "Square: a=12"
        vector<string> tokens = Utils::String::split(line, ": ");
        IParsable* parser = factory.create(tokens[0]); // "Square"=> SquareParser
        IShape* shape = dynamic_cast<IShape*>(parser->parse(tokens[1])); // "a=12" => Square(_a = 12)
        if(shape)
            shapes.push_back(shape);
    }

    PrintInfo::instance()->PrintOut(shapes, lines.size());
    cout << endl;
    shapes = Sorting::instance()->sortShape(shapes);

    vector<int> widths = {
        12,17,13
    };

    PrintTable p1(widths);
    p1.PrintOut(shapes, lines.size());
    

}