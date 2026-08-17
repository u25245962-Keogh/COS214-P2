#ifndef DESTINATION_H
#define DESTINATION_H

class Destination : Map {


public:
	Destination(string title);

	void print();

	void add(Map param);

	void remove(Map param);
};

#endif
