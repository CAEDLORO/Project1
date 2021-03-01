#include <iostream>
#include <stdlib.h>
#include "animal.h"
Animal::Animal(std::string le_nom, float le_poid, int _autres) {
	this->nom = le_nom;
	this->poid = le_poid;
	this->autres = _autres;
}

Animal::Animal() {
	this->nom = "";
	this->poid = 0;
}

int Animal::getAutres() {
	return this->autres;
}
std::string Animal::getNom() {
	return this->nom;
}
float Animal::getPoid(){
	return this->poid;
}


