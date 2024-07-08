#ifndef SCHOOLMANAGEMENT_H
#define SCHOOLMANAGEMENT_H

#include <vector>
#include "Student.h"
#include "Teacher.h"

class SchoolManagement {
private:
    std::vector<Student> students;
    std::vector<Teacher> teachers;

public:
    void addStudent(const Student& student);
    void displayStudents() const;

    void addTeacher(const Teacher& teacher);
    void displayTeachers() const;

    void saveData();
    void loadData();
};

#endif // SCHOOLMANAGEMENT_H
