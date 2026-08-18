#include "AirState.h"

void AirState::move(Player* player, const std::string& terrain){
        if (terrain == "forest") {
            std::cout << "Descending from Air to Ground terrain...\n";
            player->setState(new GroundState());
        } else if (terrain == "ocean") {
            std::cout << "Descending from Air to Water terrain...\n";
            player->setState(new WaterState());
        } else {
            //current state loop
            std::cout << "Flying through Air over " << terrain << "...\n";
        }
    }

    std::string AirState::getStateName() const{ 
        return "Air"; 
    }