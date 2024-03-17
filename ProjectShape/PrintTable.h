#pragma once
#include "IPrint.h"

/// <summary>
/// Class to print out the table information
/// </summary>
class PrintTable : public IPrint {
private:
	vector<int> _widths;

public:
	PrintTable(vector<int>);
public:
	/// <summary>
	/// Override function from class Object
	/// </summary>
	/// <returns></returns>
	string toString() {
		return "Print Table";
	}

	/// <summary>
	/// Print the table of shapes including their perimeter and area
	/// </summary>
	/// <param name=""></param>
	void PrintOut(vector<IShape*>, int);

	string paddString(string s, int width);

	vector<string> ShapeToRowConverter(IShape*);

	

};