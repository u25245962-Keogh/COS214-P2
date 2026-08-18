#include "Player.h"
#include "Map.h"
#include <iostream>

Player::Player(const std::string& playerName, MoveState* initialState) 
    : state(initialState), name(playerName), steps(0) {}

Player::~Player() {
    if (state != nullptr) {
        delete state;
        state = nullptr;
    }
}

void Player::setName(const std::string& n) {
    this->name = n;
}

std::string Player::getName() const {
    return this->name;
}

void Player::setState(MoveState* newState) {
    if (this->state != newState) {
        if (this->state != nullptr) {
            delete this->state;
        }
        this->state = newState;
    }
}

MoveState* Player::getState() const {
    return this->state;
}

int Player::getSteps() const {
    return this->steps;
}

void Player::setSteps(int s) {
    this->steps = s;
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