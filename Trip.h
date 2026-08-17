#ifndef TRIP_H
#define TRIP_H

class Trip {

private:
	RouteStrategy* strategy;

public:
	Trip();

	void planRoute();

	void setStrategy(RouteStrategy* s);

	virtual void ~Trip() = 0;
};

#endif
