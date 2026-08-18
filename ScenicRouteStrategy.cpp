#include "ScenicRouteStrategy.h"
#include <iostream>

ScenicRouteStrategy::ScenicRouteStrategy() {
}

std::string ScenicRouteStrategy::calculateRoute() {
	return "Using scenic route";
}

void ScenicRouteStrategy::print() {
	std::cout << "Scenic Route" << std::endl;
	std::cout << "Prioritize scenic beauty" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}

ScenicRouteStrategy::~ScenicRouteStrategy() {
	std::cout << "Deleting ScenicRouteStrategy" << std::endl;
}
