#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "student.h"

int main()
{
    std::vector<Student> students;
    std::string studentName;

    // Ask for students until "stop" is given
    while (true)
    {
        std::cout << "Enter student name (or 'stop' to end): ";
        std::getline(std::cin, studentName);
        if (studentName == "stop")
        {
            break;
        }

        Student student(studentName);
        std::string courseName;
        std::string grade;

        // Ask for courses until "stop" is given
        while (true)
        {
            std::cout << "Enter course name (or 'stop' to end): ";
            std::getline(std::cin, courseName);
            if (courseName == "stop")
            {
                break;
            }
            std::cout << "Enter grade for " << courseName << ": ";
            std::getline(std::cin, grade);

            student.addCourse(courseName, grade);
        }

        students.push_back(student);
    }

    // Print out grades for each student
    for (const auto& student : students)
    {
        student.printGrades();
    }

    return 0;
}