#include "Player.h"
#include <iostream>

Player::Player(const std::string& playerName, MoveState* initialState) 
    : name(playerName), state(initialState), steps(0) {}

Player::~Player() {
    delete state; // Free memory on deletion
    state = nullptr;
}

void Player::setName(const std::string& n) {
    this->name = n;
}

std::string Player::getName() const {
    return this->name;
}

void Player::setState(MoveState* newState) {
    if (this->state != newState) {
        delete this->state; // Free old state to prevent memory leak
        this->state = newState;
    }
}

MoveState* Player::getState() const {
    return this->state;
}

std::string Player::doMove(Map* area) {
    if (!area) {
        return "Invalid movement area!";
    }
    std::string currentTerrain = gps.getPos(*area);
    steps++;

    if (state) {
        state->move(this, currentTerrain);
    }

    return name + " moved to terrain: " + currentTerrain + " (current steps: " + std::to_string(steps) + ")";
}