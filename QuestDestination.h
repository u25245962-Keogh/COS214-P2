#ifndef QUESTDESTINATION_H
#define QUESTDESTINATION_H
#include "Map.h"
#include <iostream>

class QuestDestination : public Map {

protected:
	Map* wrappedMap;

public:
	QuestDestination(Map* map, std::string title);

	virtual void print() = 0;

	void add(Map* m);

	void remove(Map* m);

	virtual ~QuestDestination();
};

#endif
