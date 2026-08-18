#ifndef GPS_H
#define GPS_H

#include <string>

class Map;  // Forward declaration

class GPS {
public:
	std::string getPos(const Map& map);
};

#endif