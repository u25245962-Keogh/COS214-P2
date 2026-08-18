#include "WorldBuilder.h"

std::string WorldBuilder::getWorldTitle() const{
	return this->worldTitle;
}


WorldBuilder::WorldBuilder(std::string name) {
 this->worldTitle = name;
}
