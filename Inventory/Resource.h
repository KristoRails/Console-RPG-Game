#pragma once
#include <string>
#include <iostream>

class Resource
{
protected:
	std::string type_of_resource;
	float weight_of_resource;

public:
	Resource();
	Resource(std::string, float);
	Resource(const Resource& source);
	~Resource();

	//Getters and Setters
	std::string get_type();
	float get_weight();

	void set_type(std::string type);
	void set_weight(float weight);

	// Operator overloading
	// Input & Output overloading

	friend std::ostream& operator<<(std::ostream&, const Resource& resource);
	friend std::istream& operator>>(std::istream&, Resource& resource);

	friend bool operator==(const Resource&, const Resource&);
};