#ifndef RAINWEATHERDESTINATION_H
#define RAINWEATHERDESTINATION_H

#include "WeatherDestination.h"
#include <string>

class RainWeatherDestination : public WeatherDestination {

private:
	std::string rainIntensity;
	std::string windSpeed;

public:
	RainWeatherDestination(Map* map, std::string rainIntensity = "moderate", std::string windSpeed = "10kmph");

	void print() override;

	std::string getRainIntensity() const;

	std::string getWindSpeed() const;

	~RainWeatherDestination() override;
};

#endif
