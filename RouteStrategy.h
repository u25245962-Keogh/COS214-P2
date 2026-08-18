#ifndef ROUTESTRATEGY_H
#define ROUTESTRATEGY_H
#include <string>
#include <iostream>

class RouteStrategy {

public:
	virtual std::string calculateRoute() = 0;

	virtual void print() = 0;

	virtual ~RouteStrategy();
};

#endif
