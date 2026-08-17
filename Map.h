#ifndef MAP_H
#define MAP_H

class Map {

protected:
	Obstacle obstacle;
	Terrain terrain;
	NPC npc;
	WorldBuilder builder;
private:
	string title;

public:
	Map(string title);

	virtual void add(Map param) = 0;

	virtual void remove(Map param) = 0;

	string getTitle();

	void setTitle(string title);

	void ~Map();
};

#endif
