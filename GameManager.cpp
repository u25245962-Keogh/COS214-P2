#include "GameManager.h"
#include "ForestFactory.h"
#include "DesertFactory.h"
#include "OceanFactory.h"
#include "GroundState.h"
#include "AirState.h"
#include "WaterState.h"
#include "ShortestRouteStrategy.h"
#include "ScenicRouteStrategy.h"
#include "Region.h"
#include "Destination.h"
#include "RainWeatherDestination.h"
#include "SunnyWeatherDestination.h"
#include "BossQuestDestination.h"
#include "FetchQuestDestination.h"
#include <iostream>

GameManager::GameManager() : trip(nullptr), player(nullptr) {
    trip = new Trip("Citadel of Atlantis");
    trip->setStrategy(new ShortestRouteStrategy());
    player = new Player("Wayfarer", new GroundState());
    setMap(1);
}

GameManager::~GameManager() {
    if (trip != nullptr) {
        delete trip;
        trip = nullptr;
    }
    if (player != nullptr) {
        delete player;
        player = nullptr;
    }
    for (Map* m : map) {
        delete m;
    }
    map.clear();
}

Trip* GameManager::getTrip() const {
    return trip;
}

Player* GameManager::getPlayer() const {
    return player;
}

const std::vector<Map*>& GameManager::getMap() const {
    return map;
}

void GameManager::setMap(int preset) {
    for (Map* m : map) {
        delete m;
    }
    map.clear();

    if (player != nullptr) {
        player->setSteps(0);
        player->setState(new GroundState());
    }

    if (preset == 1) {
        // Preset 1: 3-Biome Journey with State Transitions leading to Destination
        ForestFactory ff;
        DesertFactory df;
        OceanFactory of;

        Map* node0 = new Region("Whispering Woods");
        node0->setTerrain(ff.createTerrain());
        node0->setNPC(ff.createNPC("Elf Ranger"));
        node0->setObstacle(ff.createObstacle("Thick Brambles"));

        Map* node1 = new Region("Shifting Dunes");
        node1->setTerrain(df.createTerrain());
        node1->setNPC(df.createNPC("Nomad Merchant"));
        node1->setObstacle(df.createObstacle("Sandstorm"));

        Map* node2 = new Region("Azure Coast");
        node2->setTerrain(of.createTerrain());
        node2->setNPC(of.createNPC("Mermaid Scout"));
        node2->setObstacle(of.createObstacle("Coral Reef"));

        Map* node3 = new Destination("Citadel of Atlantis");
        node3->setTerrain(of.createTerrain());
        node3->setNPC(of.createNPC("Poseidon's Avatar"));
        node3->setObstacle(of.createObstacle("Tidal Wave Barrier"));

        map.push_back(node0);
        map.push_back(node1);
        map.push_back(node2);
        map.push_back(node3);

        if (trip != nullptr) {
            delete trip;
        }
        trip = new Trip("Citadel of Atlantis");
        trip->setStrategy(new ShortestRouteStrategy());
    } else if (preset == 2) {
        // Preset 2:
        DesertFactory df;
        OceanFactory of;

        Map* r1 = new Region("blueRegion");
        r1->setTerrain(df.createTerrain());
        r1->setNPC(df.createNPC("DesertNPC"));
        r1->setObstacle(df.createObstacle("DesertObstacle"));

        Map* r2 = new Region("PinkRegion");
        r2->setTerrain(df.createTerrain());
        r2->setNPC(df.createNPC("DesertNPC"));
        r2->setObstacle(df.createObstacle("DesertObstacle"));

        Map* r3 = new Destination("purpleLand");
        r3->setTerrain(of.createTerrain());
        r3->setNPC(of.createNPC("OceanNPC"));
        r3->setObstacle(of.createObstacle("OceanObstacle"));

        Map* r4 = new Destination("YellowLand");
        r4->setTerrain(df.createTerrain());
        r4->setNPC(df.createNPC("DesertNPC"));
        r4->setObstacle(df.createObstacle("DesertObstacle"));

        r1->add(r2);
        r1->add(r3);
        r2->add(r4);

        //Decorator
        Map* place = new Destination("field");
        place->setTerrain(df.createTerrain());
        place->setNPC(df.createNPC("DesertNPC"));
        place->setObstacle(df.createObstacle("DesertObstacle"));

        Map* dragonDestination = new BossQuestDestination(place, "dragon", "hard", "combat");
        Map* rainyPlace = new RainWeatherDestination(dragonDestination, "moderate", "10kmph");

        map.push_back(r1);
        map.push_back(rainyPlace);

        if (trip != nullptr) {
            delete trip;
        }
        trip = new Trip("Dragon's Lair at Field");
        trip->setStrategy(new ScenicRouteStrategy());
    } else {
        // Preset 3:
        ForestFactory ff;
        OceanFactory of;

        Map* fRegion = new Region("Verdant Highlands");
        fRegion->setTerrain(ff.createTerrain());
        fRegion->setNPC(ff.createNPC("Druid Elder"));
        fRegion->setObstacle(ff.createObstacle("Overgrown Vines"));
        Map* node0 = new SunnyWeatherDestination(fRegion, "80F", "Very High");

        Map* oRegion = new Region("Sunken Depths");
        oRegion->setTerrain(of.createTerrain());
        oRegion->setNPC(of.createNPC("Deep Diver"));
        oRegion->setObstacle(of.createObstacle("Abyssal Trench"));
        Map* node1 = new FetchQuestDestination(oRegion, "Pearl of Wisdom", "Sunken Shipwreck", "fetch");

        Map* endDest = new Destination("Sanctuary of Eternity");
        endDest->setTerrain(ff.createTerrain());
        endDest->setNPC(ff.createNPC("ForestNPC"));
        endDest->setObstacle(ff.createObstacle("ForestObstacle"));

        Map* qDec = new BossQuestDestination(endDest, "Titan Golem", "Epic", "combat");
        Map* wDec = new RainWeatherDestination(qDec, "Heavy Torrential", "50kmph");
        Map* sDec = new SunnyWeatherDestination(wDec, "95F", "Extreme");
        Map* node2 = sDec;

        map.push_back(node0);
        map.push_back(node1);
        map.push_back(node2);

        if (trip != nullptr) {
            delete trip;
        }
        trip = new Trip("Sanctuary of Eternity");
        trip->setStrategy(new ScenicRouteStrategy());
    }
}

void GameManager::run() {
    std::cout << "\n======================================================\n";
    std::cout << "        WAYFARER GAME ENGINE - GAME LOOP START        \n";
    std::cout << "======================================================\n";

    if (map.empty()) {
        std::cout << "[GameManager] Map is empty! Initializing preset 1...\n";
        setMap(1);
    }

    if (!player) {
        std::cout << "[GameManager] Error: No player exists in GameManager!\n";
        return;
    }

    if (trip) {
        std::cout << "\n--- Route Planning for Current Trip ---" << std::endl;
        trip->planRoute();
    }

    std::cout << "\n[GameManager] Player: " << player->getName()
              << " | Initial State: " << player->getState()->getStateName()
              << " | Starting Step: " << player->getSteps() << "\n" << std::endl;

    while (true) {
        int currentStep = player->getSteps();
        if (currentStep >= static_cast<int>(map.size())) {
            std::cout << "[GameManager] All available map nodes traversed without detecting a destination node.\n";
            break;
        }

        Map* currentArea = map[currentStep];
        std::cout << "------------------------------------------------------\n";
        std::cout << ">>> Step [" << currentStep << "] - Entering: " << currentArea->getTitle() << " <<<\n";
        
        currentArea->print();
        bool isDest = currentArea->isDestination();

        std::string moveResult = player->doMove(currentArea);
        std::cout << "[Movement] " << moveResult << std::endl;
        std::cout << "[State] Mode is now: " << player->getState()->getStateName() << std::endl;

        if (isDest) {
            std::cout << "\n======================================================\n";
            std::cout << "  DESTINATION NODE DETECTED: " << currentArea->getTitle() << "\n";
            std::cout << "   FINAL STEPS " << player->getSteps() << " steps\n";
            std::cout << "======================================================\n\n";
            break;
        }
    }
}
