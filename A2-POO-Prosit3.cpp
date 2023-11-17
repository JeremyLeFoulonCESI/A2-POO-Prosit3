#include <iostream>
#include "Parcours3D.hpp"
#include "Parcours2D.hpp"

#define ENDL '\n'


// noms de types peu explicites utilisés dans le main de l'énoncé, sous forme d'alias
// pour plus de clarté dans la déclaration des classes.
typedef Point2D CLpoint;
typedef Point3D CLpoint3D;
typedef Parcours CLParcours;
typedef Parcours2D CLparcours2D;
typedef Parcours3D CLparcours3D;

/*
Note:
Ce code oublie complètement de libérer la mémoire, donc j'ai rajouté cela.
Oublier de libérer la mémoire dans un programme plus complexe peut vite
entrainer des fuites de mémoire, et ainsi saturer l'espace mémoire de
l'ordinateur. 
Ne pas libérer l'espace mémoire lorsque l'on en a plus besoin est donc une
TRES MAUVAISE pratique.
*/

int main() {

	CLpoint* p1;
	CLpoint* p2;
	CLpoint* p3;
	CLParcours* parcours;

	p1 = new CLpoint(0, 0);
	p2 = new CLpoint(1, 1);
	p3 = new CLpoint(2, 2);

	parcours = new CLparcours2D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	std::cout << parcours->calculDistance() << ENDL;
	parcours->message();

	// NE PAS OUBLIER DE LIBERER LA MEMOIRE:
	delete p1;
	delete p2;
	delete p3;

	p1 = new CLpoint3D(0, 0, 0);
	p2 = new CLpoint3D(1, 1, 1);
	p3 = new CLpoint3D(2, 2, 2.2);

	// NE PAS OUBLIER DE LIBERER LA MEMOIRE:
	delete parcours;
	parcours = new CLparcours3D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	/*
	Ici, 
	*/
	std::cout << parcours->calculDistance() << ENDL;
	parcours->message();

	// NE PAS OUBLIER DE LIBERER LA MEMOIRE:
	delete parcours;
	delete p1;
	delete p2;
	delete p3;

	p1 = new CLpoint(0, 0);
	p2 = new CLpoint3D(1, 1, 1);

	// NE PAS OUBLIER DE LIBERER LA MEMOIRE:
	delete p1;
	(p1 = p2)->afficherCoordo();

	// NE PAS OUBLIER DE LIBERER LA MEMOIRE:
	delete p2;

	std::cin.get();
}

