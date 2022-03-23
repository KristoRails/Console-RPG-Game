#include <iostream>
#include <vector>
#include <memory>

#include "Resource.h"
#include "Player.h"
#include "Inventory.h"
#include "Player_Hero.h"

std::unique_ptr<Player> create_player_hero()
{
	std::unique_ptr<Player> player = std::make_unique<Player_Hero>();
	std::cin >> *player;
	return player;
}

std::shared_ptr<Player> create_shared_players_hero()
{
	std::shared_ptr<Player> player{ new Player_Hero("Steve", 100, 100, 100, 100, 500, 500) };
	return player;
}


int main()
{
	
}