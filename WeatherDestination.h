#ifndef WEATHERDESTINATION_H
#define WEATHERDESTINATION_H

#include "Map.h"
#include <iostream>
#include <string>

class WeatherDestination : public Map {

protected:
	Map* wrappedMap;
	std::string weatherCondition;

public:
	WeatherDestination(Map* map, std::string title, std::string weatherCondition);

	virtual void print() = 0;

	void add(Map* m) override;

	void remove(Map* m) override;

	std::string getWeatherCondition() const;

	bool isDestination() const override;

	Terrain* getTerrain() const override;
	NPC* getNPC() const override;
	Obstacle* getObstacle() const override;
	WorldBuilder* getBuilder() const override;

	virtual ~WeatherDestination();
};

#endif
