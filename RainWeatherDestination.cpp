#include "RainWeatherDestination.h"
#include "WeatherDestination.h"
#include <iostream>

RainWeatherDestination::RainWeatherDestination(Map* map) 
	: WeatherDestination(map, "RainyWeather: " + map->getTitle()) {
}

void RainWeatherDestination::print() {
	std::cout << "~~ Rain Weather Destination ~~" << std::endl;
	std::cout << "Weather: RAINY" << std::endl;
	if (wrappedMap != nullptr) {
		std::cout << "Area details:" << std::endl;
		wrappedMap->print();
	}
	std::cout << "-----------------------------" << std::endl;
}

RainWeatherDestination::~RainWeatherDestination() {
	std::cout << "Deleting RainWeatherDestination: " << getTitle() << std::endl;
}
