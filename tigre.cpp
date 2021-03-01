#include "tigre.h"

Tigre::Tigre(std::string le_nom, float le_poid, int _autres){
	this->nom = le_nom;
	this->poid = le_poid;
	this->autres = _autres;
}

Diete Tigre::calculerDiete() {
	float viande = poid * 0.05;
	float fruit = 0;
	float herbe = 0;
	Diete tigre(viande, fruit, herbe);
	return tigre;
}

std::string Tigre::getNom(){
	return this->nom;
}

float Tigre::getPoid() {
	return this->poid;
}