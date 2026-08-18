#include "WaterState.h"

void WaterState::move(Player* player, const std::string& terrain){
        if (terrain == "desert") {
            std::cout << "Taking off into Air from Ocean/Water...\n";
            player->setState(new AirState());
        } else if (terrain == "forest") {
            std::cout << "Stepping onto Ground forest...\n";
            player->setState(new GroundState());
        } else {
            // "ocean" or current state loop
            std::cout << "Swimming/Sailing through Water...\n";
        }
    }

    std::string WaterState::getStateName() const{ 
        return "Water"; 
    }