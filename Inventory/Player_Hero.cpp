#include "Player_Hero.h"

Player_Hero::Player_Hero()
	: attack_power{0}, defence_power{0}
{
	//
}

Player_Hero::Player_Hero(std::string name, float h, float e, float b, int l, float attack_power, float defence_power)
	:Player(name,h,e,b,l), attack_power{attack_power}, defence_power{defence_power}
{
	//
}

void Player_Hero::inventory()
{
	player_inventory.addResources(3);
}

void Player_Hero::get_inventory()
{
	std::cout<< player_inventory;
}

std::ostream& operator<<(std::ostream& os, const Player_Hero& obj)
{
	os << "Name: " << obj.name << "\n";
	os << "Health: " << obj.health << "\n";
	os << "Experience: " << obj.experience << "\n";
	os << "Balance: " << obj.balance << "\n";
	os << "Level: " << obj.level << "\n";
	os << "Attack Power: " << obj.attack_power << "\n";
	os << "Defence Power: " << obj.defence_power << "\n";
	return os;
}
