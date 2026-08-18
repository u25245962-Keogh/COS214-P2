#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "MoveState.h"
#include "GPS.h"

class Map;

class Player {
private:
    MoveState* state;
    std::string name;
    GPS gps;
    int steps;

public:
    Player(const std::string& playerName, MoveState* initialState);
    ~Player();

    void setName(const std::string& n);
    std::string getName() const;

    void setState(MoveState* newState);
    MoveState* getState() const;

    int getSteps() const;
    void setSteps(int s);

    std::string doMove(Map* area);
};

#endif