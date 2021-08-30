#pragma once
#include "Fruit.h"
class Banana : public Fruit {
public:
	Banana() : Fruit(&_bananaName, &_bananaColor) {};
private:
	std::string _bananaName = "banana";
	std::string _bananaColor = "yellow";
};

