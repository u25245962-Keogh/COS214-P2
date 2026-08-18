#ifndef AIRSTATE_H
#define AIRSTATE_H

#include "MoveState.h"
#include "GroundState.h"
#include "WaterState.h"
#include "Player.h"

class AirState : public MoveState{
    void move(Player* player, const std::string& terrain);
    std::string getStateName() const;
};

#endif