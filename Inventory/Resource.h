#pragma once
#include <string>
#include <iostream>

class Resource
{
protected:
	std::string type_of_resource;
	float weight_of_resource;
	std::string rarity;

public:
	Resource();
	Resource(std::string, float, std::string);
	Resource(const Resource& source);
	virtual ~Resource();


	//Getters and Setters
	std::string get_type() const;
	float get_weight() const;
	std::string get_rarity() const;

	void set_type(std::string type);
	void set_weight(float weight);
	void set_rarity(std::string);

	// Operator overloading
	// Input & Output overloading

	friend std::ostream& operator<<(std::ostream&, const Resource& resource);
	friend std::istream& operator>>(std::istream&, Resource& resource);

	friend bool operator==(const Resource&, const Resource&);
};