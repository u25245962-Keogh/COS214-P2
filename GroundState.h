#ifndef GROUNDSTATE_H
#define GROUNDSTATE_H

#include "MoveState.h"

class GroundState : public MoveState {
public:
    GroundState();
    virtual ~GroundState();
    void move(Player* player, const std::string& terrain);
    std::string getStateName() const;
};

#endif