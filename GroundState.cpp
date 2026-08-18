#include "GroundState.h"
#include "AirState.h"
#include "WaterState.h"
#include "Player.h"
#include <iostream>

GroundState::GroundState() {}

GroundState::~GroundState() {}

void GroundState::move(Player* player, const std::string& terrain) {
    if (terrain == "desert") {
        std::cout << "Taking off into Air from Desert...\n";
        player->setState(new AirState());
    } else if (terrain == "ocean") {
        std::cout << "Entering Water terrain...\n";
        player->setState(new WaterState());
    } else {
        // current state loop
        std::cout << "Walking on Ground through " << terrain << "...\n";
    }
}

std::string GroundState::getStateName() const { 
    return "Ground"; 
}