#ifndef ROUTESTRATEGY_H
#define ROUTESTRATEGY_H

class RouteStrategy {


public:
	void Path();

	RouteStrategy();

	virtual void print() = 0;

	virtual void ~RouteStrategy() = 0;
};

#endif
