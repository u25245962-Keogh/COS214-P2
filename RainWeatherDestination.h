#ifndef RAINWEATHERDESTINATION_H
#define RAINWEATHERDESTINATION_H
#include "WeatherDestination.h"
#include <string>

class RainWeatherDestination : public WeatherDestination {

public:
	RainWeatherDestination(Map* map);

	void print();

	~RainWeatherDestination();
};

#endif
