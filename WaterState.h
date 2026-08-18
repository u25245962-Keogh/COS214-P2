#ifndef WATERSTATE_H
#define WATERSTATE_H

#include "MoveState.h"

class WaterState : public MoveState {
public:
    WaterState();
    virtual ~WaterState();
    void move(Player* player, const std::string& terrain);
    std::string getStateName() const;
};

#endif