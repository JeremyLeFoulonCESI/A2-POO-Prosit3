#pragma once
#include "Point2D.hpp"
#include <vector>

class Parcours
{
	std::vector<Point2D*> points;

public:
	Parcours();
	double distance();
	void ajouterPoint(Point2D* point);
};

