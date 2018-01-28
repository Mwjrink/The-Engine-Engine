#pragma once
#include "ImportUtility.h"

class Entity
{
private:
	int ID;
	Point Position;
	float Width, Length, Height;

public:
	//Constructor
	Entity(int);

	//Getters
	float GetWidth();
	float GetLength();
	float GetHeight();
	Point GetPosition();

	//Member Function
	int GetID();


	//Destructor
	~Entity();
};

