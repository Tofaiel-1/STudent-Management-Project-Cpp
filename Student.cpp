#include "Student.h"

Student::Student(int id, std::string name, int age, std::string class_name) 
    : id(id), name(name), age(age), class_name(class_name) {}

int Student::getId() const { return id; }
std::string Student::getName() const { return name; }
int Student::getAge() const { return age; }
std::string Student::getClassName() const { return class_name; }

void Student::display() const {
    std::cout << "ID: " << id << ", Name: " << name 
              << ", Age: " << age << ", Class: " << class_name << std::endl;
}
