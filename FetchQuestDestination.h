#ifndef FETCHQUESTDESTINATION_H
#define FETCHQUESTDESTINATION_H
#include "QuestDestination.h"
#include <string>

class FetchQuestDestination : public QuestDestination {

public:
	FetchQuestDestination(Map* map, std::string item = "Item");

	void print();

	~FetchQuestDestination();
};

#endif
