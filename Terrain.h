#ifndef TERRAIN_H
#define TERRAIN_H
#include <string>

class Terrain {

private:
	std::string name;


public:
	Terrain();

	virtual ~Terrain() = 0;

	std::string getName();

	void setName(std::string name);

};

#endif
