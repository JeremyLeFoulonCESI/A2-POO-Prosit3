#pragma once
#include "Point3D.hpp"
#include <vector>
#include <cstdint>

class Parcours
{
protected:
	std::vector<Point2D*> points;

	void message(uint16_t ndim);
public:
	Parcours(int);
	void ajouterPoint(Point2D* point);
	virtual double calculDistance() = 0;
	virtual void message() = 0;
};

