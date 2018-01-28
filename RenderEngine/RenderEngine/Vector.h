#pragma once
#include "ImportUtility.h"

struct Vector
{
	Point StartingPoint;
	float X;
	float Y;
	float Z;
	float Magnitude;
	Vector(Point p, float x, float y, float z) {
		StartingPoint = p;
		X = x;
		Y = y;
		Z = z;
		Magnitude = sqrt(pow(X, 2) + pow(Y, 2) + pow(Z, 2));
	}

	Vector UnitVector() {
		return Vector(
			StartingPoint,
			X / Magnitude,
			Y / Magnitude,
			Z / Magnitude
		);
	}
};

