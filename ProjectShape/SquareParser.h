#pragma once
#include "IParsable.h"
#include "Square.h"


/// <summary>
/// Class supplies information about parsing method for Square
/// </summary>
class SquareParser : public IParsable {
public:
    /// <summary>
    /// Parsing method for Square
    /// </summary>
    /// <param name="square"></param>
    /// <returns></returns>
    Object* parse(std::string square) override;

    /// <summary>
    /// Return the name of the parsed object Square
    /// </summary>
    /// <returns></returns>
    string parsedObjectName() {
        return "Square";
    }
};
