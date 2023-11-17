#include "Parcours2D.hpp"
#include <cmath>


void Parcours2D::message() {
	return this->Parcours::message(2);
}

double Parcours2D::calculDistance() {
	double distance = 0;
	Point2D* pt = this->points[0];

	for (int i = 1; i < this->points.size(); i++) {
		double dx = this->points[i]->getX() - pt->getX();
		double dy = this->points[i]->getY() - pt->getY();
		distance += std::sqrt(dx * dx + dy * dy);
		pt = this->points[i];
	}
	return distance;
}

