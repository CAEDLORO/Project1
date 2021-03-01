#include "singe.h"

Singe::Singe(std::string nomS, float poidS, int _autres){
	this->nom = nomS;
	this->poid = poidS;
	this->autres = _autres;
}

Diete Singe::calculerDiete(){
	float viande = poid * 0.01;
	float fruit = poid * 0.01;
	float herbe = poid * 0.005;
	if (autres == 1) {
		herbe = 0;
	}
	Diete singe(viande, fruit, herbe);
	return singe;
}

std::string Singe::getNom() {
	return this->nom;
}

float Singe::getPoid() {
	return this->poid;
}