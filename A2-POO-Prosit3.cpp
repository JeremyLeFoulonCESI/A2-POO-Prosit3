#include <iostream>
#include "Parcours.hpp"
#include "Point3D.hpp"


int main() {
    Point2D* p1, *p2, *p3;
    Parcours* parcours;

    p1 = new Point2D(0, 0);
    p2 = new Point2D(1, 1);
    p3 = new Point2D(2, 2);
    parcours = new Parcours();

    parcours->ajouterPoint(p1);
    parcours->ajouterPoint(p2);
    parcours->ajouterPoint(p3);
    
    std::cout << parcours->distance() << '\n';
    std::cout << "parcours 2D\n";

    delete p1;
    delete p2;
    delete p3;

    p1 = new Point3D(0, 0, 0);
    p2 = new Point3D(1, 1, 1);
    p3 = new Point3D(2, 2, 2.2);

    delete parcours;
    parcours = new Parcours();

    parcours->ajouterPoint(p1);
    parcours->ajouterPoint(p2);
    parcours->ajouterPoint(p3);

    std::cout << parcours->distance() << '\n';
    std::cout << "parcours 3D\n";

    delete parcours;
    delete p1;
    delete p2;
    delete p3;

    p1 = new Point2D(0, 0);
    p2 = new Point3D(1, 1, 1);
    
    delete p1;
    (p1 = p2)->displayCoordinates();
    delete p2;

    std::cin.get();
}

