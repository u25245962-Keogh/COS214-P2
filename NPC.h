#ifndef NPC_H
#define NPC_H

#include <iostream>

class NPC {

private:
	std::string name;

public:

	NPC(std::string);
	virtual ~NPC();

	std::string getName() const;
};

#endif
