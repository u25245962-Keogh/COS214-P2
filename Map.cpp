#include "Map.h"
#include <iostream>
#include <string>

Map::Map(std::string t) : obstacle(nullptr), terrain(nullptr), npc(nullptr), builder(nullptr), title(t) {
}

std::string Map::getTitle() const {
	return this->title;
}

void Map::setTitle(std::string t) {
	title = t;
}

void Map::setTerrain(Terrain* t) {
	if (terrain != nullptr && terrain != t) {
		delete terrain;
	}
	terrain = t;
}

void Map::setNPC(NPC* n) {
	if (npc != nullptr && npc != n) {
		delete npc;
	}
	npc = n;
}

void Map::setObstacle(Obstacle* o) {
	if (obstacle != nullptr && obstacle != o) {
		delete obstacle;
	}
	obstacle = o;
}

void Map::setBuilder(WorldBuilder* b) {
	builder = b;
}

Terrain* Map::getTerrain() const {
	return terrain;
}

NPC* Map::getNPC() const {
	return npc;
}

Obstacle* Map::getObstacle() const {
	return obstacle;
}

WorldBuilder* Map::getBuilder() const {
	return builder;
}

void Map::print() {
	std::cout << "Map: " << title << std::endl;
}

Map::~Map() {
	std::cout << "Deleting Map: " << title << std::endl;
	if (obstacle != nullptr) {
		delete obstacle;
		obstacle = nullptr;
	}
	if (terrain != nullptr) {
		delete terrain;
		terrain = nullptr;
	}
	if (npc != nullptr) {
		delete npc;
		npc = nullptr;
	}
}