#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <string>

class Map {

protected:
	Obstacle obstacle;
	Terrain terrain;
	NPC npc;
	WorldBuilder builder;
private:
	std::string title;

public:
	Map(std::string title);

	virtual void add(Map m) = 0;

	virtual void remove(Map m) = 0;

	std::string getTitle();

	void setTitle(std::string title);

	~Map();
};

#endif
