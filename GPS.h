#ifndef GPS_H
#define GPS_H

#include "Map.h"

class GPS{
	string getPos(const Map& map){
		return map.terrain->getName();
	}
};

#endif