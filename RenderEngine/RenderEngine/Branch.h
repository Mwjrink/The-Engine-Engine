#pragma once
#include "ImportUtility.h"

class Branch
{
private:
	const int MAXIMUMCOLLISIONELEMENTS = 10;
	bool isSplit=false;
	Branch* Branches;
	Entity* Entities;

public:
	//Constructor
	Branch();

	//Member Functions
	void Add(CollisionEntity);
	void Remove(CollisionEntity);
	void GetCollidableEntities(float, float, float, int[]);


	//Destructor
	~Branch();
};

