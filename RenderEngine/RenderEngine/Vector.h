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
		}

		Vector UnitVector() {
			int Magnitude = sqrt(exp(X, 2) + exp() + exp());
			return Vector(
			StartingPoint,

			);
		}
	};

