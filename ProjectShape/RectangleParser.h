#pragma once
#include "IParsable.h"
#include "Rectangle.h"

/// <summary>
/// Class supplies information about parsing method for Rectangle
/// </summary>
class RectangleParser : public IParsable {
public:
    /// <summary>
    /// Parsing method for rectangle
    /// </summary>
    /// <param name="rect"></param>
    /// <returns></returns>
    Object* parse(std::string rect) override;

    /// <summary>
    /// Retur the the parsed object "Rectangle"
    /// </summary>
    /// <returns></returns>
    string parsedObjectName() {
        return "Rectangle";
    }
};
