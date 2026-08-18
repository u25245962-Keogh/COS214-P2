#include "QuestDestination.h"

QuestDestination::QuestDestination(Map* map, std::string title) : Map(title), wrappedMap(map) {
	if (wrappedMap == nullptr) {
		throw std::invalid_argument("Wrapped map cannot be null");
	}
}

void QuestDestination::add(Map* m) {
	if (wrappedMap != nullptr) { //null checking
		wrappedMap->add(m);
	}
}

void QuestDestination::remove(Map* m) {
	if (wrappedMap != nullptr) {//null checking
		wrappedMap->remove(m);
	}
}

QuestDestination::~QuestDestination() {
	std::cout << "Deleting QuestDestination: " << getTitle() << std::endl;
	
}
