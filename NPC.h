#ifndef NPC_H
#define NPC_H

class NPC {

private:
	std::string name;

public:
	NPC();

	virtual ~NPC() = 0;

	std::string getName();

	void setName(std::string name);
};

#endif
