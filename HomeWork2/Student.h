#pragma once
#include "Person.h"

class Student : public Person {
public:
	Student(std::string studentName = "", int studentAge = 0, sex studentSex = sex::man, int studentWeight = 0, int studyYear = 0) : Person(studentName, studentAge, studentSex, studentWeight), _studyYear(studyYear) {};
	void setStudyYear(int year);
	int getStudyYear() { return _studyYear; };
	void addStudyYear();
private:
	int _studyYear;
};

