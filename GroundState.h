#ifndef GROUNDSTATE_H
#define GROUNDSTATE_H

#include "MoveState.h"
#include "AirState.h"
#include "WaterState.h"
#include "Player.h"

class GroundState : public MoveState {
public:
    void move(Player* player, const std::string& terrain);
    std::string getStateName() const;
};

#endif