#include "NPC.h"

std::string NPC::getName() const{
	return this->name;
}

NPC::NPC(std::string s)
{
	this->name = s;
}

