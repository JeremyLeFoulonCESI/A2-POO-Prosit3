#include "Point3D.hpp"
#include <iostream>


Point3D::Point3D(double x, double y, double z) :
	Point2D(x, y), z(z)
{}

double Point3D::getZ() {
	return this->z;
}

void Point3D::afficherCoordo() {
	this->Point2D::afficherCoordo();
	std::cout << '(' << this->z << ')';
}

