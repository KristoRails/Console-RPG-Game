#include "Player.h"

Player::Player()
	:name{"Empty"}, health{0.0}, experience{0.0}, balance{0.0}, level{0}
{
}

Player::Player(const std::string p_name, const float p_health, const float p_experience, const float p_balance, const int p_level)
	: name{p_name}, health{ p_health }, experience{ p_experience }, balance{ p_balance }, level{ p_level }
{
}

Player::~Player()
{
}

void Player::type_of_player()
{
	std::cout << "I am a normal player" << std::endl;
}

Player::Player(const Player& source)
	:Player(source.name, source.health, source.experience, source.balance, source.level)
{
}

// Operator Overloading

bool Player::operator==(const Player& compare_level) const
{
	if (this->level == compare_level.level)
		return true;
	return false;
}

Player Player::operator+(const Player& compare) const
{
	Player temp;	
	temp.balance = this->balance + compare.balance;
	temp.experience = this->experience + compare.experience;
	return temp;
}

//Operator Overloading (TESTING)
void Player::operator=(const std::string p_name)
{
	this->name = p_name;
}

void Player::operator=(const float experience)
{
	this->experience += experience;
}


// Setters and Getters

std::string Player::get_name() const
{
	return this->name;
}

float Player::get_health() const
{
	return this->health;
}

float Player::get_experience() const
{
	return this->experience;
}

float Player::get_balance() const
{
	return this->balance;
}

int Player::get_level() const
{
	return this->level;
}

void Player::set_name(std::string name)
{
	this->name = name;
}

void Player::set_health(float health)
{
	this->health = health;
}

void Player::set_experience(float experience)
{
	this->experience = experience;
}

void Player::set_balance(float balance)
{
	this->balance = balance;
}

void Player::set_level(int level)
{
	this->level = level;
}

std::ostream& operator<<(std::ostream& os, const Player& obj)
{
	os << "Name: " << obj.name << "\n";
	os << "Health: " << obj.health << "\n";
	os << "Experience: " << obj.experience << "\n";
	os << "Balance: " << obj.balance << "\n";
	os << "Level: " << obj.level << "\n";
	return os;
}

std::istream& operator>>(std::istream& input, Player& obj)
{
	std::cout << "Enter Player Name: ";
	input >> obj.name;

	std::cout << "Enter Player Health: ";
	input >> obj.health;

	std::cout << "Enter Player Experience: ";
	input >> obj.experience;

	std::cout << "Enter Player Balance: ";
	input >> obj.balance;

	std::cout << "Enter Player Level: ";
	input >> obj.level;

	return input;
}
