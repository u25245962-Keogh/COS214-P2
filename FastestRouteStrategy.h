#ifndef FASTESTROUTESTRATEGY_H
#define FASTESTROUTESTRATEGY_H
#include "RouteStrategy.h"
#include <string>

class FastestRouteStrategy : public RouteStrategy {

public:
	FastestRouteStrategy();

	std::string calculateRoute();

	void print();

	~FastestRouteStrategy();
};

#endif
