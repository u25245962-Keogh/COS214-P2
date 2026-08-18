#ifndef WATERSTATE_H
#define WATERSTATE_H

#include "MoveState.h"
#include "AirState.h"
#include "GroundState.h"
#include "Player.h"

class WaterState : public MoveState{
    void move(Player* player, const std::string& terrain);
    std::string getStateName() const;
};

#endif