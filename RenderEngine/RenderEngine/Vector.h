#pragma once
#include "ImportUtility.h"

class Vector
{
public:
	Point StartingPoint;
	struct Direction
	{
		float x;
		float y;
		float z;
	};

	struct _Vector
	{
		float x;
		float y;
		float z;
		Point StartingPoint;
	};

	//public Direction: UnitVector();

	Vector();
	~Vector();
};

