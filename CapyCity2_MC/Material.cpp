#include "Material.h"

char materialLabel;

Material::Material(double price) {
	this->price = price;
}

double Material::getMaterialPrice()
{
	return price;
}