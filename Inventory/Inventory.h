#pragma once
#include "Resource.h"
#include <vector>


class Inventory
{
protected:
	std::vector<Resource> inventory_player;
	int resource_limit;

public:
	Inventory();
	void addResources(int);

	//Operator overloading
	friend std::ostream& operator<<(std::ostream&, const Inventory&);
};
