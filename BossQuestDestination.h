#ifndef BOSSQUESTDESTINATION_H
#define BOSSQUESTDESTINATION_H

#include "QuestDestination.h"
#include <string>

class BossQuestDestination : public QuestDestination {

private:
	std::string bossName;
	std::string difficulty;

public:
	BossQuestDestination(Map* map, std::string bossName = "dragon", std::string difficulty = "hard", std::string questType = "combat");

	void print() override;

	std::string getBossName() const;

	std::string getDifficulty() const;

	~BossQuestDestination() override;
};

#endif
