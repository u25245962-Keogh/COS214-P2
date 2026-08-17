#ifndef TERRAIN_H
#define TERRAIN_H

class Terrain {

private:
	string name;
	int attribute;

public:
	Terrain();

	virtual void ~Terrain() = 0;

	string getName();

	void setName(string name);

	void getAttribute();

	void setAttribute(int attribute);
};

#endif
