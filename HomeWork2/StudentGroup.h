#pragma once
#include "Student.h"
class StudentGroup {
private:
	int static const _maxStudents = 100;
	int _studentsAmount = 0;
	Student* _students[_maxStudents];
public:
	int getStudentsAmount() { return _studentsAmount; };
	bool addStudent(Student& student);
	Student* getStudent(std::string name);
	Student* getStudent(std::string name, int year);
};

