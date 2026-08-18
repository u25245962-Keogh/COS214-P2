#include "Region.h"
#include "Map.h"
#include "<vector>

Region::Region(std::string title) : Map(title) {
	next = 
	
}

void Region::add(Map m) {
	this.next.push_back(m);
}

void Region::remove(Map m) {
	for (Map* child : this->next) {
		
		if(child.title == next.title){
			delete child;
		}
	}
	
}

Region::~Region(){
	for (Map* child : this->next) {
		delete child; // Deletes the object on the heap
	}
	next.clear();
}
