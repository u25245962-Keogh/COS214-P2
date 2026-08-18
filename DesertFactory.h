#ifndef DESERTFACTORY_H
#define DESERTFACTORY_H

#include "WorldBuilder.h"
#include "DesertTerrain.h"
#include "DesertObstacle.h"
#include "DesertNPC.h"

class DesertFactory : public WorldBuilder{

public:
    DesertFactory() : WorldBuilder("Desert") {}
    Terrain* createTerrain(){ return new DesertTerrain(); }
    NPC* createNPC(std::string NPCname) { return new DesertNPC(NPCname); }
    Obstacle* createObstacle(std::string obstacleName) { return new DesertObstacle(obstacleName); }
};


#endif