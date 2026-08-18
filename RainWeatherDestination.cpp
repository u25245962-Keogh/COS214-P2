#include "RainWeatherDestination.h"
#include <iostream>

RainWeatherDestination::RainWeatherDestination(Map* map, std::string rainIntensity, std::string windSpeed) 
	: WeatherDestination(map, "RainWeatherDestination: " + (map ? map->getTitle() : "Unknown"), "rain"),
	  rainIntensity(rainIntensity), windSpeed(windSpeed) {
}

void RainWeatherDestination::print() {
	std::cout << "~~ Rain Weather Destination ~~" << std::endl;
	std::cout << "Weather Condition: " << weatherCondition << std::endl;
	std::cout << "Weather: RAINY" << std::endl;
	std::cout << "Rain Intensity: " << rainIntensity << std::endl;
	std::cout << "Wind Speed: " << windSpeed << std::endl;
	std::cout << "Conditions: Slippery terrain, reduced visibility" << std::endl;
	if (wrappedMap != nullptr) {
		std::cout << "Encapsulated Place:" << std::endl;
		wrappedMap->print();
	}
	std::cout << "-----------------------------" << std::endl;
}

std::string RainWeatherDestination::getRainIntensity() const {
	return rainIntensity;
}

std::string RainWeatherDestination::getWindSpeed() const {
	return windSpeed;
}

RainWeatherDestination::~RainWeatherDestination() {
	std::cout << "Deleting RainWeatherDestination: " << getTitle() << std::endl;
}
