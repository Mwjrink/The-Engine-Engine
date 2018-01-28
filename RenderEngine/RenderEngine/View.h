#pragma once
#include "ImportUtility.h"

class View
{
private:
	//Member Variables
	int Width;
	int Height;
	Pixel* PixelArray;

public:
	//Constructor
	View(int width, int height);

	//Getters
	int GetWidth();
	int GetHeight();

	//Member Functions

	//Static Functions

	//Destructor
	~View();
};

