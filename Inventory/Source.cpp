#include <iostream>
#include "Resource.h"
#include "Player.h"
#include "Inventory.h"
#include "Player_Hero.h"

int main()
{
	//Quick object create test
	Player_Hero myHero("Kristo", 100, 25, 0, 1, 100, 150);

	myHero.inventory();
	myHero.get_inventory();

	std::cout << myHero;

}