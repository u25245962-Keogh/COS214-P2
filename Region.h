#ifndef REGION_H
#define REGION_H
#include "Map.h"
#include <vector>

class Region : public Map {

private:
	std::vector<Map*> children;

public:
	Region(std::string title);

	void add(Map* m);

	void remove(Map* m);

	std::vector<Map*> getChildren();

	~Region();
};

#endif
