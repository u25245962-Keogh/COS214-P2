#ifndef PLAYER_H
#define PLAYER_H

class Player {

private:
	MoveState state;
	string name;

public:
	void setName(string n);

	string getName();

	string doMove(MoveState* state);

	Player();

	void ~Player();
};

#endif
