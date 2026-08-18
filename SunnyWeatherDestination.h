#ifndef SUNNYWEATHERDESTINATION_H
#define SUNNYWEATHERDESTINATION_H
#include "WeatherDestination.h"
#include <string>

class SunnyWeatherDestination : public WeatherDestination {

private:
	std::string temperature;
	std::string uvIndex;

public:
	SunnyWeatherDestination(Map* map, std::string temperature = "75F", std::string uvIndex = "High");

	void print();

	std::string getTemperature();

	std::string getUVIndex();

	~SunnyWeatherDestination();
};

#endif
