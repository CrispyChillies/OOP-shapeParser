#pragma once
#include "IParsable.h"
#include "Circle.h"

/// <summary>
/// Class supplies information about parsing method for Circle
/// </summary>
class CircleParser : public IParsable {
public:

    /// <summary>
    /// Parsing method for circle
    /// </summary>
    /// <param name="circle"></param>
    /// <returns></returns>
    Object* parse(std::string circle) override;

    /// <summary>
    /// Return the name of parsed object "Circle"
    /// </summary>
    /// <returns></returns>
    string parsedObjectName() {
        return "Circle";
    }
};
