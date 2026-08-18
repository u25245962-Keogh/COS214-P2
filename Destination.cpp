#include "Destination.h"
#include <iostream>

Destination::Destination(string title) : Map(title) {
	
}

void Destination::print() {
	std::cout << "Destination: " << getTitle() << std::endl;
}

void Destination::add(Map* m) {
	std::cout << "Cannot add to Leaf node (Destination)" << std::endl;
}

void Destination::remove(Map* m) {
	std::cout << "Cannot remove from Leaf node (Destination)" << std::endl;
}

Destination::~Destination() {
	std::cout << "Deleting Destination: " << getTitle() << std::endl;
}