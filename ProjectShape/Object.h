#pragma once
#include <string>
#include <sstream>

using namespace std;

/// <summary>
/// Class to be inherited
/// </summary>
class Object{
    public:
        /// <summary>
        /// Pure virtual function to return the name of the class inherited
        /// </summary>
        /// <returns></returns>
        virtual string toString() = 0;

        /// <summary>
        /// Pure virtual destructor 
        /// </summary>
        virtual ~Object(){}
};      

