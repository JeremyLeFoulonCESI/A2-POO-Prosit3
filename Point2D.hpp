#pragma once
class Point2D
{
protected:
	double x, y;

public:
	Point2D(double x, double y);

	virtual double distance(Point2D* other);
	virtual void displayCoordinates();
};

