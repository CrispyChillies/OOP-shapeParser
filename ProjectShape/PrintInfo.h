#pragma once
#include "IPrint.h"

/// <summary>
/// Class to print the read data
/// </summary>
class PrintInfo : public IPrint {
private:
	inline static PrintInfo* _instance = nullptr;
public:

	static PrintInfo* instance() {
		if (_instance == nullptr) {
			_instance = new PrintInfo();
		}

		return _instance;
	}

	/// <summary>
	/// Override function from class Object
	/// </summary>
	/// <returns></returns>
	string toString() {
		return "Print Information of Shapes";
	}

	/// <summary>
	/// Print function to print shape information
	/// </summary>
	/// <param name="">a vector of shapes </param>
	void PrintOut(vector<IShape*>, int );
};