#include "Point2D.hpp"
#include <cmath>
#include <iostream>


Point2D::Point2D(double x, double y) :
	x(x), y(y)
{}

double Point2D::distance(Point2D* other) {
	double dx = this->x - other->x;
	double dy = this->y - other->y;
	return std::sqrt(dx * dx + dy * dy);
}

void Point2D::displayCoordinates() {
	std::cout << "Point2D{" << this->x << ';' << this->y << "}\n";
}

