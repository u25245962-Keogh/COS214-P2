#ifndef FORESTFACTORY_H
#define FORESTFACTORY_H

#include "WorldBuilder.h"
#include "ForestTerrain.h"
#include "ForestObstacle.h"
#include "ForestNPC.h"

class ForestFactory : public WorldBuilder{

public:
    ForestFactory() : WorldBuilder("Forest") {}
    Terrain* createTerrain() { return new ForestTerrain(); }
    NPC* createNPC(std::string NPCname) { return new ForestNPC(NPCname); }
    Obstacle* createObstacle(std::string obstacleName) { return new ForestObstacle(obstacleName); }
};


#endif