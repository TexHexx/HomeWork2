#pragma once
#include "Fruit.h"
class Apple : public Fruit {
public:
	explicit Apple(std::string color) : Fruit("apple", color) {};
protected:
	Apple(std::string variaty, std::string color) : Fruit(variaty + " apple", color) {};
};

