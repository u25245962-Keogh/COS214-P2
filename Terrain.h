#ifndef TERRAIN_H
#define TERRAIN_H
#include <string>

class Terrain {

private:
	std::string name;


public:
	Terrain();

	virtual ~Terrain();

	virtual std::string getName() const;

};

#endif
