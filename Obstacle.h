#ifndef OBSTACLE_H
#define OBSTACLE_H
#include <iostream>
#include <string>

class Obstacle {

private:
	std::string name;

public:
	std::string getName();

	void setName(std::string name);
};

#endif
