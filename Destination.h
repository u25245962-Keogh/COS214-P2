#ifndef DESTINATION_H
#define DESTINATION_H
#include "Map.h"
#include <string>
using namespace std;

class Destination : public Map {

public:
	Destination(string title);

	void print();

	void add(Map* m);

	void remove(Map* m);

	~Destination();
};

#endif
