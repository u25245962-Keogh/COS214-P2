#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <vector>
#include <iostream>
#include "Trip.h"
#include "Player.h"
#include "Map.h"

class GameManager {
private:
    Trip* trip;
    Player* player;
    std::vector<Map*> map;

public:
    GameManager();
    ~GameManager();

    void run();
    void setMap(int preset);

    Trip* getTrip() const;
    Player* getPlayer() const;
    const std::vector<Map*>& getMap() const;
};

#endif
