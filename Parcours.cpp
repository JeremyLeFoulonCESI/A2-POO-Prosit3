#include "Parcours.hpp"


Parcours::Parcours() :
	points(std::vector<Point2D*>())
{}

void Parcours::ajouterPoint(Point2D* point) {
	this->points.push_back(point);
}

double Parcours::distance() {
	double distance = 0;
	Point2D* pt = this->points[0];

	for (int i = 1; i < this->points.size(); i++) {
		distance += this->points[i]->distance(pt);
		pt = this->points[i];
	}
	return distance;
}

