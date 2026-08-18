#include "RainWeatherDestination.h"
#include "WeatherDestination.h"
#include <iostream>

RainWeatherDestination::RainWeatherDestination(Map* map, std::string rainIntensity, std::string windSpeed) 
	: WeatherDestination(map, "RainyWeather: " + map->getTitle(), "Rainy"), rainIntensity(rainIntensity), windSpeed(windSpeed) {
}

void RainWeatherDestination::print() {
	std::cout << "~~ Rain Weather Destination ~~" << std::endl;
	std::cout << "Weather Condition: " << weatherCondition << std::endl;
	std::cout << "Weather: RAINY" << std::endl;
	std::cout << "Rain Intensity: " << rainIntensity << std::endl;
	std::cout << "Wind Speed: " << windSpeed << std::endl;
	std::cout << "Conditions: Slippery terrain, reduced visibility" << std::endl;
	if (wrappedMap != nullptr) {
		std::cout << "Area details:" << std::endl;
		wrappedMap->print();
	}
	std::cout << "-----------------------------" << std::endl;
}

std::string RainWeatherDestination::getRainIntensity() {
	return rainIntensity;
}

std::string RainWeatherDestination::getWindSpeed() {
	return windSpeed;
}

RainWeatherDestination::~RainWeatherDestination() {
	std::cout << "Deleting RainWeatherDestination: " << getTitle() << std::endl;
}
