#ifndef OCEANTERRAIN_H
#define OCEANTERRAIN_H

#include "Terrain.h"

class OceanTerrain : public Terrain {
public:
    std::string getName() const{ return "ocean"; }
};

#endif