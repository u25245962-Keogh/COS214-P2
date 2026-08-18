#include "WeatherDestination.h"

WeatherDestination::WeatherDestination(Map* map, std::string title, std::string weatherCondition) 
	: Map(title), wrappedMap(map), weatherCondition(weatherCondition) {
	if (wrappedMap == nullptr) {
		throw std::invalid_argument("Wrapped map cannot be null");
	}
}

void WeatherDestination::add(Map* m) {
	if (wrappedMap != nullptr) {
		wrappedMap->add(m);
	}
}

void WeatherDestination::remove(Map* m) {
	if (wrappedMap != nullptr) {
		wrappedMap->remove(m);
	}
}

std::string WeatherDestination::getWeatherCondition() {
	return weatherCondition;
}

WeatherDestination::~WeatherDestination() {
	std::cout << "Deleting WeatherDestination: " << getTitle() << std::endl;
	// Note: we don't delete wrappedMap here as it may be managed elsewhere
}
