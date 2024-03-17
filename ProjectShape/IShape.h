#pragma once
#include "Object.h"


/// <summary>
/// Class to be inherited by other shapes class
/// </summary>
class IShape : public Object {
public:

    /// <summary>
    /// Pure virtual function to calculate area of shapes
    /// </summary>
    /// <returns></returns>
    virtual double area() = 0;

    /// <summary>
    /// Pure virutal function to calculate perimeter of shape
    /// </summary>
    /// <returns></returns>
    virtual double perimeter() = 0;

    /// <summary>
    /// Pure virtual function to return the name of the shape
    /// </summary>
    /// <returns></returns>
    virtual string name() = 0;
};
