#pragma once
#include "animal.h"

class Rhinocero : Animal {

public:
	Rhinocero(std::string nom, float poid, int autres);

	Diete calculerDiete();
	std::string getNom();
	float getPoid();
	int getAutres();
};