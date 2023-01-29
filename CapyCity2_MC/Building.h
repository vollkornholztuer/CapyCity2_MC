#include "Material.h"

#pragma once
class Building {
public:
    char getLabel();
    double getNetCost();
    Material** getNeededMaterial();
    
protected:
    char label;
    double netCost = 10000;
    Material** neededMaterial;
};

class EmptySpace : public Building {
public:
    EmptySpace();
};

class WindPlant : public Building {
public:
    WindPlant();
};

class HydroPlant : public Building {
public:
    HydroPlant();
};

class SolarPlant : public Building {
public:
    SolarPlant();
};