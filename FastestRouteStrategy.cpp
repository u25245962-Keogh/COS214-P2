#include "FastestRouteStrategy.h"
#include <iostream>

FastestRouteStrategy::FastestRouteStrategy() {
}

std::string FastestRouteStrategy::calculateRoute() {
	return "Using fastest route (time-optimized path)";
}

void FastestRouteStrategy::print() {
	std::cout << "Fastest Route Strategy" << std::endl;
	std::cout << "Prioritize travel time" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}

FastestRouteStrategy::~FastestRouteStrategy() {
	std::cout << "Deleting FastestRouteStrategy" << std::endl;
}
