#include "Parcours3D.hpp"
#include "Parcours2D.hpp"
#include <cmath>
#include <iostream>


void Parcours3D::message() {
	return this->Parcours::message(3);
}

double Parcours3D::calculDistance() {
	double distance = 0;
	Point2D* pt = this->points[0];

	for (int i = 1; i < this->points.size(); i++) {
		double dx = this->points[i]->getX() - pt->getX();
		double dy = this->points[i]->getY() - pt->getY();
		if (Point3D* p3d = dynamic_cast<Point3D*>(this->points[i])) {
			if (Point3D* pt3d = dynamic_cast<Point3D*>(pt)) {
				double dz = p3d->getZ() - pt3d->getZ();
				distance += std::sqrt(dx * dx + dy * dy + dz * dz);
			}
		} else
			distance += std::sqrt(dx * dx + dy * dy);
		pt = this->points[i];
	}
	return distance;
}

