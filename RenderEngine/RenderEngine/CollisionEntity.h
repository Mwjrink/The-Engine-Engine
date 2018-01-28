#pragma once
#include "ImportUtility.h"

class CollisionEntity
{
private:
	vector<int> CollisionIDs;

public:
	//Constructor
	CollisionEntity();

	//vector<int> GetCollisionIDs();
	bool CollidesWith(int);
	void AddCollisionIDs(int);

	//Destructor
	~CollisionEntity();
};

