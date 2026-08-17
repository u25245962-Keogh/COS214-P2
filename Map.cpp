#include "Map.h"
#include <iostream>
#include <list>

Map::Map(string t) {
	
	title = t;
}

string Map::getTitle() {
	return this->title;
}

void Map::setTitle(string title) {
	this->title = title;
}

~Map(){ //destructor
	std::cout << "Deleting Map" << std::endl;

}
