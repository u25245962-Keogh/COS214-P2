#ifndef REGION_H
#define REGION_H

#include "Map.h"
#include <vector>
#include <string>

class Region : public Map {

private:
	std::vector<Map*> children;

public:
	Region(std::string title);

	void add(Map* m) override;

	void remove(Map* m) override;

	std::vector<Map*> getChildren() const;

	void print() override;

	bool isDestination() const override { return false; }

	~Region() override;
};

#endif
