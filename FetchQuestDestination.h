#ifndef FETCHQUESTDESTINATION_H
#define FETCHQUESTDESTINATION_H

#include "QuestDestination.h"
#include <string>

class FetchQuestDestination : public QuestDestination {

private:
	std::string itemName;
	std::string itemLocation;

public:
	FetchQuestDestination(Map* map, std::string itemName = "Ancient Relic", std::string itemLocation = "Hidden Cavern", std::string questType = "fetch");

	void print() override;

	std::string getItemName() const;

	std::string getItemLocation() const;

	~FetchQuestDestination() override;
};

#endif
