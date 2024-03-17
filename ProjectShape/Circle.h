#pragma once
#include "IShape.h"

/// <summary>
/// Class supplies information about Circle
/// </summary>
class Circle : public IShape {
private:
    double _radius;
public:

    /// <summary>
    /// Constructor to create Circle Object
    /// </summary>
    /// <param name="r"></param>
    Circle(double r);

public:
    /// <summary>
    /// return Circle with its radius
    /// </summary>
    /// <returns></returns>
    string toString();

    /// <summary>
    /// return Circle name
    /// </summary>
    /// <returns></returns>
    string name();

    /// <summary>
    /// Calculate area
    /// </summary>
    /// <returns></returns>
    double area() override;

    /// <summary>
    /// Calculate perimeter
    /// </summary>
    /// <returns></returns>
    double perimeter() override;
};
