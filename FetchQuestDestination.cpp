#include "FetchQuestDestination.h"
#include "QuestDestination.h"
#include <iostream>

FetchQuestDestination::FetchQuestDestination(Map* map, std::string item) 
	: QuestDestination(map, "FetchQuest: " + item) {
}

void FetchQuestDestination::print() {
	std::cout << "=== Fetch Quest Destination ===" << std::endl;
	std::cout << "Title: " << getTitle() << std::endl;
	std::cout << "Fetch the required item" << std::endl;
	if (wrappedMap != nullptr) {
		std::cout << "Area details:" << std::endl;
		wrappedMap->print();
	}
	std::cout << "-----------------------------" << std::endl;
}

FetchQuestDestination::~FetchQuestDestination() {
	std::cout << "Deleting FetchQuestDestination: " << getTitle() << std::endl;
}
