#ifndef RAINWEATHERDESTINATION_H
#define RAINWEATHERDESTINATION_H
#include "WeatherDestination.h"
#include <string>

class RainWeatherDestination : public WeatherDestination {

private:
	std::string rainIntensity;
	std::string windSpeed;

public:
	RainWeatherDestination(Map* map, std::string rainIntensity = "Moderate", std::string windSpeed = "10 mph");

	void print();

	std::string getRainIntensity();

	std::string getWindSpeed();

	~RainWeatherDestination();
};

#endif
