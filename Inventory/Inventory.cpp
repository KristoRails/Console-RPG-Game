#include "Inventory.h"

Inventory::Inventory()
{

}

void Inventory::addResources(int limit)
{
	Resource resource{};
	resource.set_type("wood");
	resource.set_weight(0.5);

	for (size_t x = 0; x < limit; x++)
		inventory_player.push_back(resource);
}


std::ostream& operator<<(std::ostream& os, const Inventory& obj)
{
	for (size_t x = 0; x < obj.inventory_player.size(); x++)
	{
		os << obj.inventory_player[x];
	}
	return os;
}
