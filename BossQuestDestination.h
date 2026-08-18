#ifndef BOSSQUESTDESTINATION_H
#define BOSSQUESTDESTINATION_H
#include "QuestDestination.h"
#include <string>

class BossQuestDestination : public QuestDestination {

private:
	std::string bossName;
	std::string difficulty;

public:
	BossQuestDestination(Map* map, std::string bossName = "Boss", std::string difficulty = "Medium");

	void print();

	std::string getBossName();

	std::string getDifficulty();

	~BossQuestDestination();
};

#endif
