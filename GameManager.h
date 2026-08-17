#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

class GameManager {

private:
	Trip* trip;
	Player* player;
	WorldBuilder* worldBuilder;
	Region* regions;

public:
	GameManager();

	void run();

	void setWorld(WorldBuilder* w);

	void ~GameManager();
};

#endif
