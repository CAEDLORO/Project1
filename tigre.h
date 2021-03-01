#pragma once
#include "animal.h"

class Tigre : Animal{

public:
	Tigre(std::string nom, float poid, int autres);

	Diete calculerDiete();
	std::string getNom();
	float getPoid();
};
