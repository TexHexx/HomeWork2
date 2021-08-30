#pragma once
#include "Fruit.h"
class Apple : public Fruit {
public:
	explicit Apple(std::string* color) : Fruit(&_appleName, color) {};
protected:
	Apple(std::string* variaty, std::string* color) : Fruit(variaty, color){};
private:
	std::string _appleName = "apple";
};

