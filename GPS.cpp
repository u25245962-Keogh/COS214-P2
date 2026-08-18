#include "GPS.h"
#include "Map.h"
#include <string>

std::string GPS::getPos(const Map& map) {
	return map.terrain->getName();
}
