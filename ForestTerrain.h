#ifndef FORESTTERRAIN_H
#define FORESTTERRAIN_H

#include "Terrain.h"

class ForestTerrain : public Terrain {
public:
    std::string getName() const{ return "forest"; }
};

#endif