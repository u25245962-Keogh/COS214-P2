#include "QuestDestination.h"
#include <iostream>

QuestDestination::QuestDestination(Map* map, std::string title, std::string questType) 
	: Map(title), wrappedMap(map), questType(questType) {
}

void QuestDestination::add(Map* m) {
	if (wrappedMap != nullptr) {
		wrappedMap->add(m);
	}
}

void QuestDestination::remove(Map* m) {
	if (wrappedMap != nullptr) {
		wrappedMap->remove(m);
	}
}

std::string QuestDestination::getQuestType() const {
	return questType;
}

bool QuestDestination::isDestination() const {
	return wrappedMap != nullptr ? wrappedMap->isDestination() : false;
}

Terrain* QuestDestination::getTerrain() const {
	if (terrain != nullptr) return terrain;
	if (wrappedMap != nullptr) return wrappedMap->getTerrain();
	return nullptr;
}

NPC* QuestDestination::getNPC() const {
	if (npc != nullptr) return npc;
	if (wrappedMap != nullptr) return wrappedMap->getNPC();
	return nullptr;
}

Obstacle* QuestDestination::getObstacle() const {
	if (obstacle != nullptr) return obstacle;
	if (wrappedMap != nullptr) return wrappedMap->getObstacle();
	return nullptr;
}

WorldBuilder* QuestDestination::getBuilder() const {
	if (builder != nullptr) return builder;
	if (wrappedMap != nullptr) return wrappedMap->getBuilder();
	return nullptr;
}

QuestDestination::~QuestDestination() {
	std::cout << "Deleting QuestDestination: " << getTitle() << std::endl;
	if (wrappedMap != nullptr) {
		delete wrappedMap;
		wrappedMap = nullptr;
	}
}
