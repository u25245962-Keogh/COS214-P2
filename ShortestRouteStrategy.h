#ifndef SHORTESTROUTESTRATEGY_H
#define SHORTESTROUTESTRATEGY_H
#include "RouteStrategy.h"
#include <string>

class ShortestRouteStrategy : public RouteStrategy {

public:
	ShortestRouteStrategy();

	std::string calculateRoute();

	void print();

	~ShortestRouteStrategy();
};

#endif
