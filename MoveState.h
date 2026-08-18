#ifndef MOVESTATE_H
#define MOVESTATE_H

#include <iostream>
#include <string>

class Player;

class MoveState {
public:
    MoveState();
    virtual ~MoveState();

    virtual void move(Player* player, const std::string& terrain) = 0;
    virtual std::string getStateName() const = 0;
};

#endif