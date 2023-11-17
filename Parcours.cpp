#include "Parcours.hpp"
#include <iostream>


Parcours::Parcours(int) :
	points(std::vector<Point2D*>())
{}

void Parcours::message(uint16_t ndim) {
	std::cout << "Calcul d'un parcours de type " << ndim << "D.\n";
}

void Parcours::ajouterPoint(Point2D* point) {
	this->points.push_back(point);
}

