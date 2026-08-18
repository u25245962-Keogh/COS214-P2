#include "GPS.h"
#include "Map.h"
#include <string>

std::string GPS::getPos(const Map& map) {
	if (map.getTerrain() != nullptr) {
		return map.getTerrain()->getName();
	}
	return "unknown";
}