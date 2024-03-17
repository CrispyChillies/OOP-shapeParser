#pragma once
#include "Object.h"

/// <summary>
/// Class to be inherited by Shape Parsing Class
/// </summary>
class IParsable : public Object {
public:

    /// <summary>
    /// Virtual function for parsing
    /// </summary>
    /// <param name=""></param>
    /// <returns></returns>
    virtual Object* parse(std::string) = 0;

    /// <summary>
    /// Destructor for IParsable
    /// </summary>
    ~IParsable() {}

    /// <summary>
    /// Pure virtual function Parsed Object Name 
    /// </summary>
    /// <returns></returns>
    virtual string parsedObjectName() = 0;

    /// <summary>
    /// Override function from class Object
    /// </summary>
    /// <returns></returns>
    string toString() {
        return "Iparsable.\n";    
    }

};
