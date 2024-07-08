#include "Teacher.h"

Teacher::Teacher(int id, std::string name, std::string subject) 
    : id(id), name(name), subject(subject) {}

int Teacher::getId() const { return id; }
std::string Teacher::getName() const { return name; }
std::string Teacher::getSubject() const { return subject; }

void Teacher::display() const {
    std::cout << "ID: " << id << ", Name: " << name 
              << ", Subject: " << subject << std::endl;
}
