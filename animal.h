#pragma once
#include <iostream>
#include "diete.h"

class Animal {
	protected:
	std::string nom;
	float poid;
	int autres;
	public:
	Animal(std::string nom, float poid, int autres);
	Animal();
	Diete calculerDiete();
	int getAutres();
	std::string getNom();
	float getPoid();
};

