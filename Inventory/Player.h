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
	virtual ~Player();

	virtual void type_of_player();

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
	std::string get_name() const;
	float get_health() const;
	float get_experience() const;
	float get_balance() const;
	int get_level() const;

	virtual void set_name(std::string name);
	virtual void set_health(float health);
	virtual void set_experience(float experience);
	virtual void set_balance(float balance);
	virtual void set_level(int level);
};