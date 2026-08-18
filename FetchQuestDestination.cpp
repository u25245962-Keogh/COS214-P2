#include "FetchQuestDestination.h"
#include "QuestDestination.h"
#include <iostream>

FetchQuestDestination::FetchQuestDestination(Map* map, std::string itemName, std::string itemLocation) 
	: QuestDestination(map, "FetchQuest: " + itemName, "Collection"), itemName(itemName), itemLocation(itemLocation) {
}

void FetchQuestDestination::print() {
	std::cout << "=== Fetch Quest Destination ===" << std::endl;
	std::cout << "Title: " << getTitle() << std::endl;
	std::cout << "Quest Type: " << questType << std::endl;
	std::cout << "Item to Fetch: " << itemName << std::endl;
	std::cout << "Item Location: " << itemLocation << std::endl;
	std::cout << "Objective: Fetch the required item" << std::endl;
	if (wrappedMap != nullptr) {
		std::cout << "Area details:" << std::endl;
		wrappedMap->print();
	}
	std::cout << "-----------------------------" << std::endl;
}

std::string FetchQuestDestination::getItemName() {
	return itemName;
}

std::string FetchQuestDestination::getItemLocation() {
	return itemLocation;
}

FetchQuestDestination::~FetchQuestDestination() {
	std::cout << "Deleting FetchQuestDestination: " << getTitle() << std::endl;
}
