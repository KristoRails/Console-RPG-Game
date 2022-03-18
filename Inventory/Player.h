#pragma once
#include <iostream>


class Player
{
protected:
	std::string name;
	float health;
	float experience;
	float balance;
	int level;

public:
	Player();
	Player(const std::string, const float, const float, const float, const int);
	~Player();

	//Copy Constructor
	Player(const Player& source);

	//Operator Overloading
	bool operator==(const Player&) const;
	Player operator+(const Player&) const;

	//Output, Input overloading
	friend std::ostream& operator<<(std::ostream& os, const Player& obj);
	friend std::istream& operator>>(std::istream& input, Player& obj);

	//Operator Overloading (TESTING)
	void operator=(const std::string); // player change name
	void operator=(const float);

	//Getters & Setters
	std::string get_name();
	float get_health();
	float get_experience();
	float get_balance();
	int get_level();

	void set_name(std::string name);
	void set_health(float health);
	void set_experience(float experience);
	void set_balance(float balance);
	void set_level(int level);
};