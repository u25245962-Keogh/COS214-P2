#ifndef OCEANFACTORY_H
#define OCEANFACTORY_H

#include "WorldBuilder.h"
#include "OceanTerrain.h"
#include "OceanObstacle.h"
#include "OceanNPC.h"

class OceanFactory : public WorldBuilder{

public:
    Terrain* createTerrain(){ return new OceanTerrain(); }
    NPC* createNPC(std::string NPCname) { return new OceanNPC(NPCname); }
    Obstacle* createObstacle(std::string obstacleName) { return new OceanObstacle(obstacleName); }
};


#endif