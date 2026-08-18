#ifndef SUNNYWEATHERDESTINATION_H
#define SUNNYWEATHERDESTINATION_H
#include "WeatherDestination.h"
#include <string>

class SunnyWeatherDestination : public WeatherDestination {

public:
	SunnyWeatherDestination(Map* map);

	void print();

	~SunnyWeatherDestination();
};

#endif
