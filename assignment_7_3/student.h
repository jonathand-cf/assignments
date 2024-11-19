#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>

class Student
{
public:
    std::string name;
    std::map<std::string, std::string> courses;

    Student(const std::string& studentName) : name(studentName) {}

    void addCourse(const std::string& course, const std::string& grade) {
        courses[course] = grade;
    }

    void printGrades() const {
        std::cout << name << ":" << std::endl;
        for (const auto& course : courses) {
            std::cout << "  - " << course.first << " - " << course.second << std::endl;
        }
    }
};
#endif //STUDENT_H
