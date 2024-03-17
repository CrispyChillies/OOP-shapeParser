#pragma once
#include <vector>
#include "Object.h"
#include "IShape.h"

/// <summary>
/// Class to sort the shapes based on the perimeter
/// </summary>
class Sorting : public Object {
private:
	inline static Sorting* _instance = nullptr;
public:

	static Sorting* instance() {
		if (_instance == nullptr) {
			_instance = new Sorting();
		}
		return _instance;
	}

	/// <summary>
	/// Override function from class object
	/// </summary>
	/// <returns></returns>
	string toString() {
		return "Sorting";
	}

	/// <summary>
	/// Create a parameter to be compared in the sort function in c++ algorithms
	/// </summary>
	/// <param name=""></param>
	/// <param name=""></param>
	/// <returns></returns>
	static bool comparePerimeter(IShape*, IShape*);

	/// <summary>
	/// Sort the vector of Shapes based on the perimeter
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	vector<IShape*> sortShape(vector<IShape*>);
};