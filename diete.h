#pragma once
class Diete {
protected:
	float viande;
	float fruit;
	float herbe;
public:
	Diete(float viande, float fruit, float herbe);
	Diete();
	void setViande(float viande);
	void setFruit(float fruit);
	void setHerbe(float herbe);
	float getViande();
	float getFruit();
	float getHerbe();
};

