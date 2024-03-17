# ProjectShape

## Doxygen Documentation

The project use doxygen to generate documentation about how class are structured in the program, what is the super class and what are derivative classes. Please open the index.html file in html folder for detail information.

## Overview

This project demonstrates the creation and usage of a dynamic link library (DLL) named DynamicLinkLib in Visual Studio. The DLL contains the necessary files (.cpp and .h) and is utilized by a client application named ProjectShape.

## Project Structure

### DLL Project (DynamicLinkLib)

1. Place the `.cpp` and `.h` files of the DLL in the project solution.
2. Build the DLL project to generate the `DynamicLinkLib.lib` file.

### Client Project (ProjectShape) - THE INSTRUCTION BELOW IS USED IN VISUAL STUDIO

#### Include DLL Header

1. Open the Property Pages dialog for the ProjectShape project by right-clicking on the ProjectShape node in Solution Explorer.

2. In the left pane, navigate to Configuration Properties > C/C++ > General.

3. Add the path to the DLL header file (DynamicLinkLib.h) to the Additional Include Directories.

   - You can use an absolute path or a relative path from your client source files.
   - Example relative path if DLL and client are in separate solutions: `..\..\DynamicLinkLib\DynamicLinkLib`

#### Link to DLL Import Library

1. In the Property Pages for the ProjectShape project, navigate to Configuration Properties > Linker > Input.

2. Add `DynamicLinkLib.lib` to the Additional Dependencies.

3. Navigate to Configuration Properties > Linker > General.

4. Add the path to the DLL import library file (DynamicLinkLib.lib) to the Additional Library Directories.

   - You can use the $(IntDir) macro to handle different build configurations.
   - Example relative path if DLL and client are in separate solutions: `..\..\DynamicLinkLib\$(IntDir)`

5. Save the property changes.

#### Copy DLL during Build

1. As part of the build process, ensure that the DLL (DynamicLinkLib.dll) is copied to the directory containing the ProjectShape executable.

## Usage

Describe how users can use the ProjectShape application and interact with the DynamicLinkLib DLL. Provide examples or code snippets to illustrate the integration.

