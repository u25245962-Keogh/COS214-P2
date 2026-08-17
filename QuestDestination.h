#ifndef QUESTDESTINATION_H
#define QUESTDESTINATION_H

class QuestDestination {

private:
	Map* map;

public:
	QuestDestination();

	virtual void print() = 0;
};

#endif
