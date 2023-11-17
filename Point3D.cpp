#include "Point3D.hpp"
#include <cmath>


Point3D::Point3D(double x, double y, double z) :
	Point2D(x, y), z(z)
{}

double Point3D::distance(Point2D* other) {
	if (Point3D* p3d = dynamic_cast<Point3D*>(other)) {
		double dz = this->z - p3d->z;
		double dxdy = this->Point2D::distance(other);
		return std::sqrt(dxdy * dxdy + dz * dz);
	}
	return this->Point2D::distance(other);
}
