#ifndef QUESTDESTINATION_H
#define QUESTDESTINATION_H
#include "Map.h"
#include <iostream>

class QuestDestination : public Map {

protected:
	Map* wrappedMap;
	std::string questType;

public:
	QuestDestination(Map* map, std::string title, std::string questType);

	virtual void print() = 0;

	void add(Map* m);

	void remove(Map* m);

	std::string getQuestType();

	virtual ~QuestDestination();
};

#endif
