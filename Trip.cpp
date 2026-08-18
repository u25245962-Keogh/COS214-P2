#include "Trip.h"

Trip::Trip(std::string dest) : strategy(nullptr), destination(dest) {
}

void Trip::planRoute() {
	if (strategy != nullptr) {
		std::cout << "\n=== Planning trip to " << destination << " ===" << std::endl;
		strategy->print();
		std::string route = strategy->calculateRoute();
		std::cout << "Route: " << route << std::endl;
	} else {
		std::cout << "Error: No strategy set for trip to " << destination << std::endl;
	}
}

void Trip::setStrategy(RouteStrategy* s) {
	if (strategy != s) {
		if (strategy != nullptr) {
			delete strategy;
		}
		strategy = s;
	}
	std::cout << "Strategy set for trip to " << destination << std::endl;
}

std::string Trip::getDestination() {
	return destination;
}

Trip::~Trip() {
	std::cout << "Deleting Trip to " << destination << std::endl;
	if (strategy != nullptr) {
		delete strategy;
	}
}
