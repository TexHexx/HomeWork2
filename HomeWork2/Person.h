#pragma once
#include <string>

enum class sex { man, woman };

class Person {
private:
	std::string _personName;
	int _personAge;
	sex _personSex;
	int _personWeight;
public:
	Person(std::string personName = "", int personAge = 0, sex personSex = sex::man, int personWeight = 0) : _personName(personName), _personAge(personAge), _personSex(personSex), _personWeight(personWeight) {};
	void setName(std::string name);
	void setAge(int age);
	void setWeigth(int weight);
	std::string getName() { return _personName; };
	int getAge() { return _personAge; };
	sex getSex() { return _personSex; };
	int getWeight() { return _personWeight; };
};

