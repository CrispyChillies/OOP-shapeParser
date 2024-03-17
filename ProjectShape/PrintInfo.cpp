#include <iostream>
#include "PrintInfo.h"

void PrintInfo::PrintOut(vector<IShape*> shapes, int numberOfShapes) {
    std::cout << "Reading shapes.txt...\n";
    if (numberOfShapes == shapes.size()) {
        std::cout << "Found " << shapes.size() << " shapes" << endl;
    }
    else {
        std::cout << "Found " << shapes.size() << "/" << numberOfShapes << " shapes" << endl;
    }
    int i = 1;
    for (IShape* shape : shapes) { // Polymorphism

        std::cout << i << ". " << shape->toString() << endl;
        i++;
    }
}