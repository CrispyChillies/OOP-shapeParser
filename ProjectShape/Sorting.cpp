#include <algorithm>
#include "Sorting.h"

bool Sorting::comparePerimeter(IShape* s1, IShape* s2) {
	return s1->perimeter() < s2->perimeter();
}

vector<IShape*> Sorting::sortShape(vector<IShape*> shapes) {
	sort(shapes.begin(), shapes.end(), comparePerimeter);
	return shapes;
}