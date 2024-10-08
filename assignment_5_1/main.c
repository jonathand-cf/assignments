#include <stdio.h>
#define ID_LENGTH 9999999
#define NAME_SIZE 100

int getStuddentInfo(struct StudentInfo* studentInfo)
{
    printf("Enter student ID:\n");
    fgets(studentID, ID_LENGTH, stdin);
    printf("Enter student name:\n");
    fgets(studentName, NAME_SIZE, stdin);
    printf("Enter student age:\n");
    fgets(studentAge, NAME_SIZE, stdin);
}
int printStudentInfo(struct StudentInfo* studentInfo)
{
    printf("Student id: %s\n", studenID);
    printf("Name: %zu\n", studentName);
    printf("Age: %d\n", studentAge);
}

int main(void)
{
    getStuddentInfo();

}


/*
Write an application that asks the user for the following student information (in this order):
Student id
Example: 3872187
Name
Example: John Doe
Age
Example: 21
Then prints the information back to the user.
*/