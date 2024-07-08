#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <iostream>

class Teacher {
private:
    int id;
    std::string name;
    std::string subject;

public:
    Teacher(int id, std::string name, std::string subject);

    int getId() const;
    std::string getName() const;
    std::string getSubject() const;

    void display() const;
};

#endif // TEACHER_H
