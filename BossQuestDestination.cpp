#include "BossQuestDestination.h"
#include "QuestDestination.h"
#include <iostream>

BossQuestDestination::BossQuestDestination(Map* map, std::string bossName) 
	: QuestDestination(map, "BossQuest: " + bossName) {
}

void BossQuestDestination::print() {
	std::cout << "=== Boss Quest Destination ===" << std::endl;
	std::cout << "Title: " << getTitle() << std::endl;
	std::cout << "Defeat the boss!" << std::endl;
	if (wrappedMap != nullptr) {
		std::cout << "Area details:" << std::endl;
		wrappedMap->print();
	}
	std::cout << "-----------------------------" << std::endl;
}

BossQuestDestination::~BossQuestDestination() {
	std::cout << "Deleting BossQuestDestination: " << getTitle() << std::endl;
}
