#ifndef OBSTACLE_H
#define OBSTACLE_H
#include <iostream>
#include <string>

class Obstacle {

private:
	std::string name;

public:
	virtual ~Obstacle();
	Obstacle(std::string);
	std::string getName()const;
};

#endif
