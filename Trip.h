#ifndef TRIP_H
#define TRIP_H
#include "RouteStrategy.h"
#include <string>
#include <iostream>

class Trip {

private:
	RouteStrategy* strategy;
	std::string destination;

public:
	Trip(std::string dest);

	void planRoute();

	void setStrategy(RouteStrategy* s);

	std::string getDestination();

	~Trip();
};

#endif
