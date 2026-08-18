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
	Map(std::string title);

	virtual void add(Map* m) = 0;

	virtual void remove(Map* m) = 0;

	std::string getTitle();

	void setTitle(std::string title);

	virtual void print();

	 ~Map();

	 friend class GPS;
};


#endif
