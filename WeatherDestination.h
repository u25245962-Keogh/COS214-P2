#ifndef WEATHERDESTINATION_H
#define WEATHERDESTINATION_H
#include "Map.h"
#include <iostream>

class WeatherDestination : public Map {

protected:
	Map* wrappedMap;

public:
	WeatherDestination(Map* map, std::string title);

	virtual void print() = 0;

	void add(Map* m);

	void remove(Map* m);

	virtual ~WeatherDestination();
};

#endif
