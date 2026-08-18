#ifndef AIRSTATE_H
#define AIRSTATE_H

#include "MoveState.h"

class AirState : public MoveState {
public:
    AirState();
    virtual ~AirState();
    void move(Player* player, const std::string& terrain);
    std::string getStateName() const;
};

#endif