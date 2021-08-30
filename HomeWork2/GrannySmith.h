#pragma once
#include "Apple.h"
class GrannySmith : public Apple {
public:
	GrannySmith() : Apple(&_grannySmithName, &_grannySmithColor) {};
private:
	std::string _grannySmithName = "Granny Smith apple";
	std::string _grannySmithColor = "green";
};

