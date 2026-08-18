#ifndef BOSSQUESTDESTINATION_H
#define BOSSQUESTDESTINATION_H
#include "QuestDestination.h"
#include <string>

class BossQuestDestination : public QuestDestination {

public:
	BossQuestDestination(Map* map, std::string bossName = "Boss");

	void print();

	~BossQuestDestination();
};

#endif
