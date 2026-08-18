#ifndef DESERTTERRAIN_H
#define DESERTTERRAIN_H
#include "Terrain.h"

class DesertTerrain : public Terrain {
public:
    std::string getName() const{ return "desert"; }
};
#endif