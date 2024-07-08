#include "SchoolManagement.h"
#include <fstream>

void SchoolManagement::addStudent(const Student& student) {
    students.push_back(student);
}

void SchoolManagement::displayStudents() const {
    for (const auto& student : students) {
        student.display();
    }
}

void SchoolManagement::addTeacher(const Teacher& teacher) {
    teachers.push_back(teacher);
}

void SchoolManagement::displayTeachers() const {
    for (const auto& teacher : teachers) {
        teacher.display();
    }
}

void SchoolManagement::saveData() {
    std::ofstream studentFile("students.txt");
    for (const auto& student : students) {
        studentFile << student.getId() << " " << student.getName() << " " 
                    << student.getAge() << " " << student.getClassName() << std::endl;
    }
    studentFile.close();

    std::ofstream teacherFile("teachers.txt");
    for (const auto& teacher : teachers) {
        teacherFile << teacher.getId() << " " << teacher.getName() << " " 
                    << teacher.getSubject() << std::endl;
    }
    teacherFile.close();
}

void SchoolManagement::loadData() {
    std::ifstream studentFile("students.txt");
    int id, age;
    std::string name, class_name;
    while (studentFile >> id >> name >> age >> class_name) {
        students.emplace_back(id, name, age, class_name);
    }
    studentFile.close();

    std::ifstream teacherFile("teachers.txt");
    std::string subject;
    while (teacherFile >> id >> name >> subject) {
        teachers.emplace_back(id, name, subject);
    }
    teacherFile.close();
}
