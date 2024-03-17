#pragma once
#include <vector>
#include "Object.h"
#include "IShape.h"


/// <summary>
/// Class to be inherited by PrintInfo and PrintTable
/// </summary>
class IPrint : public Object {
public:

	/// <summary>
	/// Override function from class Object
	/// </summary>
	/// <returns></returns>
	string toString() {
		return "Printing Interface";
	}

	/// <summary>
	/// Pure Virtual Function to Print
	/// </summary>
	/// <param name=""></param>
	virtual void PrintOut(vector<IShape*>, int) = 0;
};
