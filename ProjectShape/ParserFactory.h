#pragma once
#include <map>
#include "Object.h"
#include "IParsable.h"
#include "RectangleParser.h"
#include "SquareParser.h"
#include "CircleParser.h"


/// <summary>
/// Class to help create factory method
/// </summary>
class ParserFactory : public Object{
private:
	/// <summary>
	/// Attribute "map" to carry the factory items
	/// </summary>
	map<string, IParsable*> _container; // A container for all the dependencies injection
public:
	/// <summary>
	/// Register function for adding new items into the factory
	/// </summary>
	/// <param name="parser"></param>
	void registerWith(IParsable* parser);

	/// <summary>
	/// Creat suitable parsing method for different shape
	/// </summary>
	/// <param name="type"> type of the shape </param>
	/// <returns>An approriate parssing function to create shape </returns>
	IParsable* create(string type);

	/// <summary>
	/// Override function from class Object
	/// </summary>
	/// <returns></returns>
	string toString() {
		return "ParserFactory.\n";
	}
};
