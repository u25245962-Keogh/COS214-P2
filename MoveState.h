#ifndef MOVESTATE_H
#define MOVESTATE_H

class MoveState {


public:
	virtual void move() = 0;

	virtual void print() = 0;

	MoveState();
};

#endif
