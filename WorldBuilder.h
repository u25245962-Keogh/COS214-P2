#ifndef WORLDBUILDER_H
#define WORLDBUILDER_H

class WorldBuilder {

private:
	string worldTitle;

public:
	virtual void ~WorldBuilder() = 0;

	string getWorldTitle();

	void setWorldTitle(string worldTitle);

	virtual void createObstacle() = 0;

	virtual void createTerrain() = 0;

	virtual void createNPC() = 0;

	WorldBuilder();
};

#endif
