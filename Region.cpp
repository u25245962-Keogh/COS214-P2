#include "Region.h"
#include <iostream>

Region::Region(std::string title) : Map(title) {
	// children is initialized as empty
}

void Region::add(Map* m) {
	if (m != nullptr) { //edge case checking
		children.push_back(m); //adds to children vector
		std::cout << "Added " << m->getTitle() << " to Region " << getTitle() << std::endl;
	}
}

void Region::remove(Map* m) {
	if (m == nullptr) return; //edge case checking
	
	for (size_t i = 0; i < children.size(); ++i) { //go through vector
		if (children[i] == m) {//if it equals the target
			std::cout << "Removing " << m->getTitle() << " from Region " << getTitle() << std::endl;
			delete children[i];//delete it 
			children.erase(children.begin() + i);//remove from children properly
			return;
		}
	}
	std::cout << "Child doesnt exist in " << getTitle() << std::endl;
}

std::vector<Map*> Region::getChildren() const {
	return children;
}

void Region::print() {
	std::cout << "Region: " << getTitle();
	if (terrain != nullptr) {
		std::cout << " [Terrain: " << terrain->getName() << "]";
	}
	if (npc != nullptr) {
		std::cout << " [NPC: " << npc->getName() << "]";
	}
	if (obstacle != nullptr) {
		std::cout << " [Obstacle: " << obstacle->getName() << "]";
	}
	std::cout << " (contains " << children.size() << " children)" << std::endl;
	for (Map* child : children) {
		if (child != nullptr) {
			std::cout << "  --> ";
			child->print();
		}
	}
}

Region::~Region() {
	std::cout << "Deleting Region: " << getTitle() << std::endl;
	for (Map* child : children) {
		delete child; // Deletes the object properly on the heap
	}
	children.clear();
}
