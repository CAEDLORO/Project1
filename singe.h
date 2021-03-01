#pragma once
#include "animal.h"

class Singe : Animal {

public:
	Singe(std::string nomS, float poidS, int autres);

	Diete calculerDiete();
	std::string getNom();
	float getPoid();
};
