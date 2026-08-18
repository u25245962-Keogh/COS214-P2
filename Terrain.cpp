#include "Terrain.h"

Terrain::Terrain(std::string name) {
	this->name = name;
}

std::string Terrain::getName() const{
	return this->name;
}