#pragma once
#include "Point2D.hpp"

class Point3D : public Point2D
{
    double z;

public:
    Point3D(double x, double y, double z);
    double distance(Point2D* other) override;
    void displayCoordinates() override;
};

