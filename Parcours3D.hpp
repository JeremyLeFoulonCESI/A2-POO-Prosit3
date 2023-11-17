#pragma once
#include "Parcours.hpp"

class Parcours3D : public Parcours
{
	using Parcours::Parcours;
public:
	double calculDistance() override;
	void message() override;
};

