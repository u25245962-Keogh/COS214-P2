#include "ShortestRouteStrategy.h"
#include <iostream>

ShortestRouteStrategy::ShortestRouteStrategy() {
}

std::string ShortestRouteStrategy::calculateRoute() {
	return "Using shortest route (minimum distance algorithm)";
}

void ShortestRouteStrategy::print() {
	std::cout << "Shortest Route Strategy" << std::endl;
	std::cout << "Prioritize short distance" << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}

ShortestRouteStrategy::~ShortestRouteStrategy() {
	std::cout << "Deleting ShortestRouteStrategy" << std::endl;
}
