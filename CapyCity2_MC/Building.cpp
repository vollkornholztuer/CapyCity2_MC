#include "Building.h"
#include "Material.h"

char label;

EmptySpace::EmptySpace() {
	double netCost = 0;
	this->label = 'E';
}

WindPlant::WindPlant() {
	this->neededMaterial = new Material*[7] {new Wood(), new Wood(), new Metal(), 
								   new Plastic(), new Plastic(), new Plastic(), 
								   new Plastic() };
	this->label = 'W';
}

HydroPlant::HydroPlant() {
	this->neededMaterial = new Material*[7] {new Wood(), new Wood(), new Wood(),
								   new Wood(), new Wood(), new Metal(), new Metal()};
	this->label = 'H';
}

SolarPlant::SolarPlant() {
	this->neededMaterial = new Material*[7] {new Plastic(), new Plastic(), new Metal(),
								   new Metal(), new Metal(), new Metal(), new Metal()};
	this->label = 'S';
}

char Building::getLabel() {
	return label;
}

double Building::getNetCost()
{
	return netCost;
}

Material** Building::getNeededMaterial()
{
	return neededMaterial;
}