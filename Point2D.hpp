#pragma once

class Point2D
{
	size_t id;
	double x, y;
	static size_t nPoints;

public:
	Point2D(double x, double y);
	virtual void afficherCoordo();
	double getX();
	double getY();
};

