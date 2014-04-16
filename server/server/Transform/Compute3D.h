#ifndef COMPUTE3D_H
#define COMPUTE3D_H

#include "../Basic/Basic.h"
#include <vector>

class Compute3D{
public:
	void init();
	Vector3D compute3D(Vector2D);
	std::vector<Vector3D> compute3D(std::vector<Vector2D> v);
};

#endif