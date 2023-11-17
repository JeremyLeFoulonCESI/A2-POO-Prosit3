#include "Point2D.hpp"
#include <iostream>

size_t Point2D::nPoints = 0;

Point2D::Point2D(double x, double y) :
	x(x), y(y), id(nPoints)
{
	nPoints += 2;
}

void Point2D::afficherCoordo() {
	std::cout << "Les coordonnees du point : " << this << " d'ID : " << this->id << " et de type ??, sont " 
		<< '(' << this->x << ':' << this->y << ")";
}

double Point2D::getX() {
	return this->x;
}

double Point2D::getY() {
	return this->y;
}


