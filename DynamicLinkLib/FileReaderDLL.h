// FileReader.h - Contains declarations of FileReader class
#pragma once
#include <vector>
#include <string>

/// \file	 FileReader.h
/// \briefHeader file for DynamicLinkLib.dll

#ifdef FILEREADER_EXPORTS
#define FILEREADER_API __declspec(dllexport)
#else
#define FILEREADER_API __declspec(dllimport)
#endif

class FILEREADER_API FileReader {
public:
	// return the class name
	std::string toString() {
		return  "FileReader";
	}
	// read shape data from a text file
	std::vector<std::string> read(std::string fileName);

};