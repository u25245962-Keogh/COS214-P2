#ifndef PLAYER_H
#define PLAYER_H

#include "MoveState.h"
#include "GPS.h"

class Player {

private:
	MoveState* state;
	string name;
	GPS gps;

public:
	void setName(string n);

	string getName();

	string doMove(MoveState* state);

	Player();

	~Player();
};

#endif
