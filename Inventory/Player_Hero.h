#pragma once
#include "Player.h"
#include "Inventory.h"

class Player_Hero : public Player
{
private:
	float attack_power;
	float defence_power;
	Inventory player_inventory;

public:
	Player_Hero();
	Player_Hero(std::string, float, float, float, int, float, float);

	void inventory();
	void get_inventory();

	friend std::ostream& operator<<(std::ostream&, const Player_Hero&);
};