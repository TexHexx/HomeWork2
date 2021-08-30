#include <iostream>
#include <windows.h>
#include "StudentGroup.h"
#include "GrannySmith.h"
#include "Banana.h"

void FirstTask()
{
    StudentGroup group;
    std::string studentName1 = "Иванов";
    std::string studentName2 = "Петрова";
    std::string studentName3 = "Сидоров";

    group.addStudent(*(new Student(&studentName1, 24, sex::man, 54, 2021)));
    group.addStudent(*(new Student(&studentName2, 24, sex::woman, 54, 2020)));
    group.addStudent(*(new Student(&studentName3, 29, sex::man, 74, 2019)));

    std::cout << "Total students in group:" << group.getStudentsAmount() << std::endl;

    while (true) {
        std::string searchName;
        std::cout << "Enter student to search: ";
        std::cin >> searchName;
        Student* foundStudent = group.getStudent(&searchName);
        if (foundStudent == NULL) {
            std::cout << "Student not found" << std::endl;
        }
        else {
            std::cout << "Student found " << std::endl
                << "Name: " << *foundStudent->getName() << std::endl
                << "Age: " << foundStudent->getAge() << std::endl
                << "Sex: " << (foundStudent->getSex() == sex::man ? "мужской" : "женский") << std::endl
                << "Weight: " << foundStudent->getWeight() << std::endl
                << "Year of study: " << foundStudent->getStudyYear() << std::endl;
        }
    }
};

void SecondTask() {
    std::string redColor = "red";
    Apple a(&redColor);
    Banana b;
    GrannySmith c;

    std::cout << "My " << *a.getName() << " is " << *a.getColor() << ".\n";
    std::cout << "My " << *b.getName() << " is " << *b.getColor() << ".\n";
    std::cout << "My " << *c.getName() << " is " << *c.getColor() << ".\n";
};

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    //FirstTask();
    //SecondTask();
    return 0;
};