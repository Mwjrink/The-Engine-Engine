#pragma once
#include "ImportUtility.h"

class Branch : public CollisionOctTree
{
private:
	const int MAXIMUMCOLLISIONELEMENTS = 10;
	bool isSplit=false;
	Branch* Branches;
	vector<Entity> Entities;
	int NumElements;
	Point Position;
	float Width;

public:
	//Constructor
	Branch();
	Branch(Point, float);
	void Init(Point, float);

	//Member Functions
	void Add(Entity);
	void Remove(Entity);
	void GetCollidableEntities(float, float, float, int[]);
	void EntityMoved();


	//Destructor
	~Branch();
};

