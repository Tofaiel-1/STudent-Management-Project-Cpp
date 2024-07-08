#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

class Student {
private:
    int id;
    std::string name;
    int age;
    std::string class_name;

public:
    Student(int id, std::string name, int age, std::string class_name);

    int getId() const;
    std::string getName() const;
    int getAge() const;
    std::string getClassName() const;

    void display() const;
};

#endif // STUDENT_H
