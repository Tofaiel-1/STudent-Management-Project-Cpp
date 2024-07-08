#include <iostream>
#include "SchoolManagement.h"
#include "Student.h"
#include "Teacher.h"

int main() {
    SchoolManagement system;
    system.loadData();

    int choice;
    do {
        std::cout << "1. Add Student\n2. Display Students\n3. Add Teacher\n4. Display Teachers\n5. Save & Exit\nEnter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            int id, age;
            std::string name, class_name;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Name: ";
            std::cin.ignore(); // Ignore leftover newline character
            std::getline(std::cin, name);
            std::cout << "Enter Age: ";
            std::cin >> age;
            std::cout << "Enter Class: ";
            std::cin.ignore(); // Ignore leftover newline character
            std::getline(std::cin, class_name);
            system.addStudent(Student(id, name, age, class_name));
        } else if (choice == 2) {
            system.displayStudents();
        } else if (choice == 3) {
            int id;
            std::string name, subject;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Name: ";
            std::cin.ignore(); // Ignore leftover newline character
            std::getline(std::cin, name);
            std::cout << "Enter Subject: ";
            std::getline(std::cin, subject);
            system.addTeacher(Teacher(id, name, subject));
        } else if (choice == 4) {
            system.displayTeachers();
        } else if (choice == 5) {
            system.saveData();
        }
    } while (choice != 5);

    return 0;
}
