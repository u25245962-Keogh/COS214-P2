#ifndef MAP_H
#define MAP_H

#include "Obstacle.h"
#include "Terrain.h"
#include "NPC.h"
#include "WorldBuilder.h"
#include "GPS.h"
#include <iostream>
#include <string>

using namespace std;

class Map {

protected:
	Obstacle* obstacle;
	Terrain* terrain;
	NPC* npc;
	WorldBuilder* builder;
private:
	std::string title;

public:
	Map(std::string title);

	virtual void add(Map* m) = 0;

	virtual void remove(Map* m) = 0;

	std::string getTitle() const;

	void setTitle(std::string title);

	virtual void print();

	virtual bool isDestination() const { return false; }

	void setTerrain(Terrain* t);
	void setNPC(NPC* n);
	void setObstacle(Obstacle* o);
	void setBuilder(WorldBuilder* b);

	virtual Terrain* getTerrain() const;
	virtual NPC* getNPC() const;
	virtual Obstacle* getObstacle() const;
	virtual WorldBuilder* getBuilder() const;

	virtual ~Map();

	friend class GPS;
};

#endif