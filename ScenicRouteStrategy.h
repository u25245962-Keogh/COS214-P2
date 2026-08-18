#ifndef SCENICROUTESTRATEGY_H
#define SCENICROUTESTRATEGY_H
#include "RouteStrategy.h"
#include <string>

class ScenicRouteStrategy : public RouteStrategy {

public:
	ScenicRouteStrategy();

	std::string calculateRoute();

	void print();

	~ScenicRouteStrategy();
};

#endif
