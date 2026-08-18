#include <iostream>
#include <string>
#include <vector>

#include "GameManager.h"
#include "Player.h"
#include "GroundState.h"
#include "AirState.h"
#include "WaterState.h"
#include "Trip.h"
#include "ShortestRouteStrategy.h"
#include "ScenicRouteStrategy.h"
#include "Region.h"
#include "Destination.h"
#include "RainWeatherDestination.h"
#include "SunnyWeatherDestination.h"
#include "BossQuestDestination.h"
#include "FetchQuestDestination.h"
#include "ForestFactory.h"
#include "DesertFactory.h"
#include "OceanFactory.h"

int main() {
    std::cout << "--- 1. Testing Abstract Factory & Biomes ---\n";
    ForestFactory ff;
    DesertFactory df;
    OceanFactory of;

    Terrain* t1 = ff.createTerrain();
    NPC* n1 = ff.createNPC("Elf");
    Obstacle* o1 = ff.createObstacle("Vines");

    Terrain* t2 = df.createTerrain();
    NPC* n2 = df.createNPC("Nomad");
    Obstacle* o2 = df.createObstacle("Dune");

    Terrain* t3 = of.createTerrain();
    NPC* n3 = of.createNPC("Sailor");
    Obstacle* o3 = of.createObstacle("Reef");

    std::cout << "Created biomes: " << t1->getName() << ", " << t2->getName() << ", " << t3->getName() << "\n";
    delete t1; delete n1; delete o1;
    delete t2; delete n2; delete o2;
    delete t3; delete n3; delete o3;

    std::cout << "\n--- 2. Testing State Pattern (Movement) ---\n";
    Player player("Wayfarer", new GroundState());
    Destination d1("Desert Area");
    d1.setTerrain(df.createTerrain());
    player.doMove(&d1);

    Destination d2("Ocean Area");
    d2.setTerrain(of.createTerrain());
    player.doMove(&d2);

    Destination d3("Forest Area");
    d3.setTerrain(ff.createTerrain());
    player.doMove(&d3);

    std::cout << "\n--- 3. Testing Strategy Pattern (Route Finding) ---\n";
    Trip trip("Lost Ruins");
    trip.setStrategy(new ShortestRouteStrategy());
    trip.planRoute();
    trip.setStrategy(new ScenicRouteStrategy());
    trip.planRoute();

    std::cout << "\n--- 4. Testing Composite Pattern (Object Diagram 1: Map Tree) ---\n";
    Region* r1 = new Region("blueRegion");
    r1->setTerrain(df.createTerrain());
    r1->setNPC(df.createNPC("DesertNPC"));
    r1->setObstacle(df.createObstacle("DesertObstacle"));

    Region* r2 = new Region("PinkRegion");
    r2->setTerrain(df.createTerrain());
    r2->setNPC(df.createNPC("DesertNPC"));
    r2->setObstacle(df.createObstacle("DesertObstacle"));

    Destination* r3 = new Destination("purpleLand");
    r3->setTerrain(of.createTerrain());
    r3->setNPC(of.createNPC("OceanNPC"));
    r3->setObstacle(of.createObstacle("OceanObstacle"));

    Destination* r4 = new Destination("YellowLand");
    r4->setTerrain(df.createTerrain());
    r4->setNPC(df.createNPC("DesertNPC"));
    r4->setObstacle(df.createObstacle("DesertObstacle"));

    r1->add(r2);
    r1->add(r3);
    r2->add(r4);
    r1->print();
    delete r1;

    std::cout << "\n--- 5. Testing Decorator Pattern (Object Diagram 2: Place Features) ---\n";
    Map* place = new Destination("field");
    place->setTerrain(df.createTerrain());
    place->setNPC(df.createNPC("DesertNPC"));
    place->setObstacle(df.createObstacle("DesertObstacle"));

    Map* dragonDest = new BossQuestDestination(place, "dragon", "hard", "combat");
    Map* rainyPlace = new RainWeatherDestination(dragonDest, "moderate", "10kmph");
    rainyPlace->print();
    delete rainyPlace;

    // Extra decorators check
    Map* sample = new Destination("Shrine");
    sample->setTerrain(ff.createTerrain());
    Map* fetchDec = new FetchQuestDestination(sample, "Holy Grail", "Shrine Altar");
    Map* sunnyDec = new SunnyWeatherDestination(fetchDec, "85F", "High");
    sunnyDec->print();
    delete sunnyDec;

    std::cout << "\n--- 6. Testing GameManager Client & Game Loop ---\n";
    GameManager gm;
    gm.setMap(1);
    gm.run();

    gm.setMap(2);
    gm.run();

    gm.setMap(3);
    gm.run();

    std::cout << "\nAll minimalist tests completed successfully.\n";
    return 0;
}
