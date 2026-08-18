#ifndef WORLDBUILDER_H
#define WORLDBUILDER_H

#include <iostream>
#include "Terrain.h"
#include "Obstacle.h"
#include "NPC.h"

class WorldBuilder {

private:
	std::string worldTitle;

public:
	virtual ~WorldBuilder();

	std::string getWorldTitle() const;

	virtual Obstacle* createObstacle(std::string) = 0;

	virtual Terrain* createTerrain() = 0;

	virtual NPC* createNPC(std::string) = 0;

	WorldBuilder(std::string);
};

#endif
