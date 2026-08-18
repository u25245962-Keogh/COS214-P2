#include "BossQuestDestination.h"
#include <iostream>

BossQuestDestination::BossQuestDestination(Map* map, std::string bossName, std::string difficulty, std::string questType)
	: QuestDestination(map, "BossQuestDestination: " + (map ? map->getTitle() : "Unknown"), questType),
	  bossName(bossName), difficulty(difficulty) {
}

void BossQuestDestination::print() {
	std::cout << "=== Boss Quest Destination ===" << std::endl;
	std::cout << "Quest Type: " << questType << std::endl;
	std::cout << "Boss Name: " << bossName << std::endl;
	std::cout << "Difficulty: " << difficulty << std::endl;
	if (wrappedMap != nullptr) {
		std::cout << "Encapsulated Place:" << std::endl;
		wrappedMap->print();
	}
	std::cout << "==============================" << std::endl;
}

std::string BossQuestDestination::getBossName() const {
	return bossName;
}

std::string BossQuestDestination::getDifficulty() const {
	return difficulty;
}

BossQuestDestination::~BossQuestDestination() {
	std::cout << "Deleting BossQuestDestination: " << getTitle() << std::endl;
}
