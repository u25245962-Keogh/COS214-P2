#ifndef MAP_H
#define MAP_H

#include "Obstacle.h"
#include "Terrain.h"
#include "NPC.h"
#include "WorldBuilder.h"
#include "GPS.h"
#include <iostream>

using namespace std;

class Map {

protected:
	Obstacle obstacle;
	Terrain* terrain;
	NPC* npc;
	WorldBuilder* builder;
private:
	std::string title;

public:
	Map(string title);

	virtual void add(Map param) = 0;

	virtual void remove(Map param) = 0;

	string getTitle();

	void setTitle(string title);

	 ~Map();

	 friend class GPS;
};


#endif
