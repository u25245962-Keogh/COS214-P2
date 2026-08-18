#ifndef QUESTDESTINATION_H
#define QUESTDESTINATION_H

#include "Map.h"
#include <iostream>
#include <string>

class QuestDestination : public Map {

protected:
	Map* wrappedMap;
	std::string questType;

public:
	QuestDestination(Map* map, std::string title, std::string questType);

	virtual void print() = 0;

	void add(Map* m) override;

	void remove(Map* m) override;

	std::string getQuestType() const;

	bool isDestination() const override;

	Terrain* getTerrain() const override;
	NPC* getNPC() const override;
	Obstacle* getObstacle() const override;
	WorldBuilder* getBuilder() const override;

	virtual ~QuestDestination();
};

#endif
