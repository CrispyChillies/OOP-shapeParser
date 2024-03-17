// FileReader.cpp - Contains definitions of FileReader class
#include "pch.h"
#include <fstream>
#include <exception>
#include "FileReaderDLL.h"

// read shape data from a text file
std::vector<std::string> FileReader::read(std::string fileName) {
	// open the file for reading
	std::ifstream inf(fileName);

	// if the file cannot be opened, throw an exception
	if (!inf) {
		throw std::exception("Can't open file to read");
	}

	// create a vector to store the shape data
	std::vector<std::string> line;

	// create a string buffer to store each line
	std::string buffer;

	// read the first line, which is the number of shapes
	getline(inf, buffer);

	// read the rest of the lines, which are the shape data
	while (getline(inf, buffer)) {
		// add each line to the vector
		line.push_back(buffer);
	}

	// return the vector
	return line;
}