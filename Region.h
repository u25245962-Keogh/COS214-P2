#ifndef REGION_H
#define REGION_H

class Region : Map {

public:
	vector<Map*> next;

	Region(string title);

	void add(Map param);

	void remove(Map param);
};

#endif
