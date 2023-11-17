#include "Point2D.hpp"
#include <cmath>


Point2D::Point2D(double x, double y) :
	x(x), y(y)
{}

double Point2D::distance(Point2D* other) {
	double dx = this->x - other->x;
	double dy = this->y - other->y;
	return std::sqrt(dx * dx + dy * dy);
}

