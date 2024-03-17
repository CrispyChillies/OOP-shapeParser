#pragma once
#include "IShape.h"

/// <summary>
/// Class supplies information about Square
/// </summary>
class Square : public IShape {
private:
    double _a;
public:
    /// <summary>
    /// Constructor to create Square Object
    /// </summary>
    /// <param name="edge"></param>
    Square(double edge);

public:
    /// <summary>
    /// Return the Square with edge
    /// </summary>
    /// <returns></returns>
    string toString();

    /// <summary>
    /// Return the name Square
    /// </summary>
    /// <returns></returns>
    string name();
    
    /// <summary>
    /// Function to calculate the area of the Square
    /// </summary>
    /// <returns></returns>
    double area() override;

    /// <summary>
    /// Function to calculate the perimeter of the Square
    /// </summary>
    /// <returns></returns>
    double perimeter() override;
};
