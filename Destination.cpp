#include "Destination.h"
#include <iostream>

Destination::Destination(std::string title) : Map(title) {
}

void Destination::print() {
	std::cout << "Destination: " << getTitle();
	if (terrain != nullptr) {
		std::cout << " [Terrain: " << terrain->getName() << "]";
	}
	if (npc != nullptr) {
		std::cout << " [NPC: " << npc->getName() << "]";
	}
	if (obstacle != nullptr) {
		std::cout << " [Obstacle: " << obstacle->getName() << "]";
	}
	std::cout << std::endl;
}

void Destination::add(Map* m) {
	(void)m;
	std::cout << "Cannot add to Leaf node (Destination)" << std::endl;
}

void Destination::remove(Map* m) {
	(void)m;
	std::cout << "Cannot remove from Leaf node (Destination)" << std::endl;
}

Destination::~Destination() {
	std::cout << "Deleting Destination: " << getTitle() << std::endl;
}