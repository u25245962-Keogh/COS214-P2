#include "Region.h"
#include <iostream>

Region::Region(std::string title) : Map(title) {
	// children is initialized as empty
}

void Region::add(Map* m) {
	if (m != nullptr) { //edge case chechking
		children.push_back(m); //adds to children vector
		std::cout << "Added " << m->getTitle() << " to Region " << getTitle() << std::endl;
	}
}

void Region::remove(Map* m) {
	if (m == nullptr) return; //edge case checkingn
	
	for (int i = 0; i < children.size(); ++i) { //go through vector
		if (children[i] == m) {//if it equals the target
			std::cout << "Removing " << m->getTitle() << " from Region " << getTitle() << std::endl;
			delete children[i];//delete it 
			children.erase(children.begin() + i);//remove from children properly (shifts elements in vector too)
			return;
		}
	}
	std::cout << "Child doesnt exist" << getTitle() << std::endl;
}

std::vector<Map*> Region::getChildren() {
	return children;
}

Region::~Region() {
	std::cout << "Deleting Region: " << getTitle() << std::endl;
	for (Map* child : children) {
		delete child; // Deletes the object properly son the heap
	}
	children.clear();
}
