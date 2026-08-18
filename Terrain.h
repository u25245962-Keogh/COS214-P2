#ifndef TERRAIN_H
#define TERRAIN_H
#include <string>

class Terrain {

private:
	std::string name;


public:
	Terrain(std::string);

	virtual ~Terrain();

	std::string getName() const;

};

#endif
