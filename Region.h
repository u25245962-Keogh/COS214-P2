#ifndef REGION_H
#define REGION_H
#include "Map.h"
#include "<vector>

class Region : Map {

public:
	std::vector<Map*> next;

	Region(std::string title);

	void add(Map param);

	void remove(Map param);

	~Region();
};

#endif
