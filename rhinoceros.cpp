#include "rhinoceros.h"

Rhinocero::Rhinocero(std::string le_nom, float le_poid, int _autres){
	this->nom = le_nom;
	this->poid = le_poid;
	this->autres = _autres;
}

Diete Rhinocero::calculerDiete() {
	float viande = 0;
	float fruit = poid * 0.005;
	float herbe = (poid * 0.02)-20;
	if (autres > 2000) {
		herbe = 0;
	}
	if (autres < 2000) {
		autres = 2000;
	}
	Diete rhinocero(viande, fruit, herbe);
	return rhinocero;
}

std::string Rhinocero::getNom() {
	return this->nom;
}

float Rhinocero::getPoid() {
	return this->poid;
}

int Rhinocero::getAutres() {
	return this->autres;
}