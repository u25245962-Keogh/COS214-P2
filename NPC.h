#ifndef NPC_H
#define NPC_H

class NPC {

private:
	string name;

public:
	NPC();

	virtual void ~NPC() = 0;

	string getName();

	void setName(string name);
};

#endif
