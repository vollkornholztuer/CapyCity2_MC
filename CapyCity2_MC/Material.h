#pragma once
class Material
{
protected:
	double price;
	char materialLabel;

public:
	double getMaterialPrice();
	Material(double price);
};

class Wood : public Material {
public:
	Wood() : Material(420.69) {

	}
};

class Metal : public Material {
public:
	Metal() : Material(694.20) {

	}
};

class Plastic : public Material {
public:
	Plastic() : Material(133.7) {

	}
};

