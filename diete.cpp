#include "diete.h"
Diete::Diete(float _viande, float _fruit, float _herbe) {
	this->viande = _viande;
	this->fruit = _fruit;
	this->herbe = _herbe;
}

Diete::Diete() {
	this->viande = 0;
	this->fruit = 0;
	this->herbe = 0;
}

void Diete::setViande(float viande) {
	this->viande = viande;
}
void Diete::setFruit(float fruit) {
	this->fruit = fruit;
}
void Diete::setHerbe(float herbe) {
	this->herbe = herbe;
}
float Diete::getViande() {
	return this->viande;
}
float Diete::getFruit() {
	return this->fruit;
}
float Diete::getHerbe() {
	return this->herbe;
}