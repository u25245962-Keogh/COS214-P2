#ifndef DESTINATION_H
#define DESTINATION_H

#include "Map.h"
#include <string>

class Destination : public Map {

public:
	Destination(std::string title);

	void print() override;

	void add(Map* m) override;

	void remove(Map* m) override;

	bool isDestination() const override { return true; }

	~Destination() override;
};

#endif
