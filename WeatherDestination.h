#ifndef WEATHERDESTINATION_H
#define WEATHERDESTINATION_H
#include "Map.h"
#include <iostream>

class WeatherDestination : public Map {

protected:
	Map* wrappedMap;
	std::string weatherCondition;

public:
	WeatherDestination(Map* map, std::string title, std::string weatherCondition);

	virtual void print() = 0;

	void add(Map* m);

	void remove(Map* m);

	std::string getWeatherCondition();

	virtual ~WeatherDestination();
};

#endif
