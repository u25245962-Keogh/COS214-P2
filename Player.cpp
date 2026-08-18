#include "Player.h"
#include "MoveState.h"
#include <iostream>

using namespace std;

void Player::setName(string n) {
	this->name = n;
}

string Player::getName() {
	return this->name;
}

string Player::doMove(MoveState* state) {
	// TODO - implement Player::doMove
	throw "Not yet implemented";
}

Player::Player() {
	// TODO - implement Player::Player
	throw "Not yet implemented";
}
