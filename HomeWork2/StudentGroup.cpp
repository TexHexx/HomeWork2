#include "StudentGroup.h"

bool StudentGroup::addStudent(Student* student) {
	if (_studentsAmount < _maxStudents) {
		_students[_studentsAmount++] = student;
		return true;
	}
	return false;
};

Student* StudentGroup::getStudent(std::string name) {
	for (int i = 0; i < _studentsAmount; i++) {
		if (_students[i]->getName() == name)
			return _students[i];
	}
	return NULL;
};

Student* StudentGroup::getStudent(std::string name, int year) {
	for (int i = 0; i < _studentsAmount; i++) {
		if ((_students[i]->getName() == name) && (_students[i]->getStudyYear() == year))
			return _students[i];
	}
	return NULL;
};
