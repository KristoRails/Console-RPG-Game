#include "Resource.h"

Resource::Resource()
	: type_of_resource("empty"), weight_of_resource(0.0)
{

}

Resource::Resource(std::string type, float weight, std::string rarity)
	: type_of_resource(type), weight_of_resource(weight), rarity{rarity}
{
}

Resource::Resource(const Resource& source)
	:type_of_resource(source.type_of_resource), weight_of_resource(source.weight_of_resource) , rarity(source.rarity)
{

}

Resource::~Resource()
{

}

std::string Resource::get_type() const
{
	return this->type_of_resource;
}

float Resource::get_weight() const
{
	return this->weight_of_resource;
}

std::string Resource::get_rarity() const
{
	return this->rarity;
}

void Resource::set_type(std::string type)
{
	this->type_of_resource = type;
}

void Resource::set_weight(float weight)
{
	this->weight_of_resource = weight;
}

void Resource::set_rarity(std::string rarity)
{
	this->rarity = rarity;
}

std::ostream& operator<<(std::ostream& os, const Resource& resource)
{
	os << "Type of resource: " << resource.type_of_resource << "\n";
	os << "Weight of resource: " << resource.weight_of_resource << "\n";
	return os;
}

std::istream& operator>>(std::istream& input, Resource& resource)
{
	std::cout << "Enter type of resource ";
	input >> resource.type_of_resource;

	std::cout << "Enter weight of resource ";
	input >> resource.weight_of_resource;
	return input;
}

bool operator==(const Resource& left, const Resource& right)
{
	if (left.type_of_resource == right.type_of_resource)
		return true;
	return false;
}
