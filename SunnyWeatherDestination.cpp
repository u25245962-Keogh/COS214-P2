#include "SunnyWeatherDestination.h"
#include "WeatherDestination.h"
#include <iostream>

SunnyWeatherDestination::SunnyWeatherDestination(Map* map) 
	: WeatherDestination(map, "SunnyWeather: " + map->getTitle()) {
}

void SunnyWeatherDestination::print() {
	std::cout << "*** Sunny Weather Destination ***" << std::endl;
	std::cout << "Weather: SUNNY" << std::endl;
	if (wrappedMap != nullptr) {
		std::cout << "Area details:" << std::endl;
		wrappedMap->print();
	}
	std::cout << "-----------------------------" << std::endl;
}

SunnyWeatherDestination::~SunnyWeatherDestination() {
	std::cout << "Deleting SunnyWeatherDestination: " << getTitle() << std::endl;
}
