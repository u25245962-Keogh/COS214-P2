#include "SunnyWeatherDestination.h"
#include <iostream>

SunnyWeatherDestination::SunnyWeatherDestination(Map* map, std::string temperature, std::string uvIndex) 
	: WeatherDestination(map, "SunnyWeatherDestination: " + (map ? map->getTitle() : "Unknown"), "sunny"),
	  temperature(temperature), uvIndex(uvIndex) {
}

void SunnyWeatherDestination::print() {
	std::cout << "*** Sunny Weather Destination ***" << std::endl;
	std::cout << "Weather Condition: " << weatherCondition << std::endl;
	std::cout << "Weather: SUNNY" << std::endl;
	std::cout << "Temperature: " << temperature << std::endl;
	std::cout << "UV Index: " << uvIndex << std::endl;
	std::cout << "Conditions: Clear skies, excellent visibility, hot" << std::endl;
	if (wrappedMap != nullptr) {
		std::cout << "Encapsulated Place:" << std::endl;
		wrappedMap->print();
	}
	std::cout << "-----------------------------" << std::endl;
}

std::string SunnyWeatherDestination::getTemperature() const {
	return temperature;
}

std::string SunnyWeatherDestination::getUVIndex() const {
	return uvIndex;
}

SunnyWeatherDestination::~SunnyWeatherDestination() {
	std::cout << "Deleting SunnyWeatherDestination: " << getTitle() << std::endl;
}
