#include "WeatherDestination.h"
#include <iostream>

WeatherDestination::WeatherDestination(Map* map, std::string title, std::string weatherCondition) 
	: Map(title), wrappedMap(map), weatherCondition(weatherCondition) {
}

void WeatherDestination::add(Map* m) {
	if (wrappedMap != nullptr) {
		wrappedMap->add(m);
	}
}

void WeatherDestination::remove(Map* m) {
	if (wrappedMap != nullptr) {
		wrappedMap->remove(m);
	}
}

std::string WeatherDestination::getWeatherCondition() const {
	return weatherCondition;
}

bool WeatherDestination::isDestination() const {
	return wrappedMap != nullptr ? wrappedMap->isDestination() : false;
}

Terrain* WeatherDestination::getTerrain() const {
	if (terrain != nullptr) return terrain;
	if (wrappedMap != nullptr) return wrappedMap->getTerrain();
	return nullptr;
}

NPC* WeatherDestination::getNPC() const {
	if (npc != nullptr) return npc;
	if (wrappedMap != nullptr) return wrappedMap->getNPC();
	return nullptr;
}

Obstacle* WeatherDestination::getObstacle() const {
	if (obstacle != nullptr) return obstacle;
	if (wrappedMap != nullptr) return wrappedMap->getObstacle();
	return nullptr;
}

WorldBuilder* WeatherDestination::getBuilder() const {
	if (builder != nullptr) return builder;
	if (wrappedMap != nullptr) return wrappedMap->getBuilder();
	return nullptr;
}

WeatherDestination::~WeatherDestination() {
	std::cout << "Deleting WeatherDestination: " << getTitle() << std::endl;
	if (wrappedMap != nullptr) {
		delete wrappedMap;
		wrappedMap = nullptr;
	}
}
