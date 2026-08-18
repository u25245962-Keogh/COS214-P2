#include "Map.h"
#include <iostream>
#include <string>


Map::Map(std::string t) {
	
	title = t;
}

std::string Map::getTitle() {
	return this->title;
}

void Map::setTitle(std::string t) {
	title = t;
}

void Map::print() {
	std::cout << "Map" << std::endl;
}

Map::~Map(){ //destructor
	std::cout << "Deleting Map" << std::endl;

}
