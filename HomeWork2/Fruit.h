#pragma once
#include <string>

class Fruit {
private:
	std::string _name;
	std::string _color;
public:
	Fruit(std::string name, std::string color) : _name(name), _color(color) {};
	std::string getName() { return _name; };
	std::string getColor() { return _color; };
	void setName(std::string name);
	void setColor(std::string color);
};