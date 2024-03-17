#pragma once
#include "IShape.h"


/// <summary>
/// Class supplies information about Rectangle
/// </summary>
class Rectangle : public IShape {
private:
    double _width;
    double _height;
public:
    /// <summary>
    /// Constructor to create Rectangle Objecgt
    /// </summary>
    /// <param name="x"></param>
    /// <param name="y"></param>
    Rectangle(double x, double y);

public:
    /// <summary>
    /// Return the name of rectangle with width and height
    /// </summary>
    /// <returns></returns>
    string toString();

    /// <summary>
    /// Return the name rectangle
    /// </summary>
    /// <returns></returns>
    string name();
   
    /// <summary>
    /// Calculate the area of the rectangle
    /// </summary>
    /// <returns></returns>
    double area() override;

    /// <summary>
    /// Calculate the perimeter of the rectangle
    /// </summary>
    /// <returns></returns>
    double perimeter() override;
};
