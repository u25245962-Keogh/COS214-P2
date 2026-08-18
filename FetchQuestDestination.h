#ifndef FETCHQUESTDESTINATION_H
#define FETCHQUESTDESTINATION_H
#include "QuestDestination.h"
#include <string>

class FetchQuestDestination : public QuestDestination {

private:
	std::string itemName;
	std::string itemLocation;

public:
	FetchQuestDestination(Map* map, std::string itemName = "Item", std::string itemLocation = "Unknown");

	void print();

	std::string getItemName();

	std::string getItemLocation();

	~FetchQuestDestination();
};

#endif
