#ifndef WORLDBUILDER_H
#define WORLDBUILDER_H

#include <iostream>

class WorldBuilder {

private:
	std::string worldTitle;

public:
	virtual ~WorldBuilder();

	std::string getWorldTitle() const;


	virtual void createObstacle() = 0;

	virtual void createTerrain() = 0;

	virtual void createNPC() = 0;

	WorldBuilder(std::string);
};

#endif
