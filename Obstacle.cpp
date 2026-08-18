#include "Obstacle.h"

std::string Obstacle::getName() const {
	return this->name;
}

Obstacle::Obstacle(std::string name){
	this->name = name;
}

Obstacle::~Obstacle() {
}
