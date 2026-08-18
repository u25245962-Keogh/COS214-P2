#include "BossQuestDestination.h"
#include "QuestDestination.h"
#include <iostream>

BossQuestDestination::BossQuestDestination(Map* map, std::string bossName, std::string difficulty) 
	: QuestDestination(map, "BossQuest: " + bossName, "Combat"), bossName(bossName), difficulty(difficulty) {
}

void BossQuestDestination::print() {
	std::cout << "=== Boss Quest Destination ===" << std::endl;
	std::cout << "Title: " << getTitle() << std::endl;
	std::cout << "Quest Type: " << questType << std::endl;
	std::cout << "Boss Name: " << bossName << std::endl;
	std::cout << "Difficulty: " << difficulty << std::endl;
	std::cout << "Objective: Defeat the boss!" << std::endl;
	if (wrappedMap != nullptr) {
		std::cout << "Area details:" << std::endl;
		wrappedMap->print();
	}
	std::cout << "-----------------------------" << std::endl;
}

std::string BossQuestDestination::getBossName() {
	return bossName;
}

std::string BossQuestDestination::getDifficulty() {
	return difficulty;
}

BossQuestDestination::~BossQuestDestination() {
	std::cout << "Deleting BossQuestDestination: " << getTitle() << std::endl;
}
