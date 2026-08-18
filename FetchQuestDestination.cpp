#include "FetchQuestDestination.h"
#include <iostream>

FetchQuestDestination::FetchQuestDestination(Map* map, std::string itemName, std::string itemLocation, std::string questType)
	: QuestDestination(map, "FetchQuestDestination: " + (map ? map->getTitle() : "Unknown"), questType),
	  itemName(itemName), itemLocation(itemLocation) {
}

void FetchQuestDestination::print() {
	std::cout << "=== Fetch Quest Destination ===" << std::endl;
	std::cout << "Quest Type: " << questType << std::endl;
	std::cout << "Item Name: " << itemName << std::endl;
	std::cout << "Item Location: " << itemLocation << std::endl;
	if (wrappedMap != nullptr) {
		std::cout << "Encapsulated Place:" << std::endl;
		wrappedMap->print();
	}
	std::cout << "===============================" << std::endl;
}

std::string FetchQuestDestination::getItemName() const {
	return itemName;
}

std::string FetchQuestDestination::getItemLocation() const {
	return itemLocation;
}

FetchQuestDestination::~FetchQuestDestination() {
	std::cout << "Deleting FetchQuestDestination: " << getTitle() << std::endl;
}
