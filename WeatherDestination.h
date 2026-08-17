#ifndef WEATHERDESTINATION_H
#define WEATHERDESTINATION_H

class WeatherDestination {

private:
	Map* map;

public:
	WeatherDestination();

	virtual void print() = 0;
};

#endif
