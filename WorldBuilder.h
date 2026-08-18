#ifndef WORLDBUILDER_H
#define WORLDBUILDER_H

class WorldBuilder {

private:
	std::string worldTitle;

public:
	virtual ~WorldBuilder() = 0;

	std::string getWorldTitle();

	void setWorldTitle(std::string worldTitle);

	virtual void createObstacle() = 0;

	virtual void createTerrain() = 0;

	virtual void createNPC() = 0;

	WorldBuilder();
};

#endif
