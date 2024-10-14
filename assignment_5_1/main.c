#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "studentInfo.h"

int main()
{
    studentInfo_t studentInfo;  // Create an instance of the studentInfo_t struct

    // Clear the studentName and studentID arrays
    memset(studentInfo.studentName, 0, NAME_SIZE);
    memset(studentInfo.studentID, 0, ID_LENGTH);

    // Prompt for student information
    printf("Please enter your ID (e.g., 3872187):\n");
    fgets(studentInfo.studentID, ID_LENGTH, stdin);
    studentInfo.studentID[strcspn(studentInfo.studentID, "\n")] = '\0';  // Remove newline character

    printf("Please enter your name (e.g., John Doe):\n");
    fgets(studentInfo.studentName, NAME_SIZE, stdin);
    studentInfo.studentName[strcspn(studentInfo.studentName, "\n")] = '\0';  // Remove newline character

    printf("Please enter your age (e.g., 21):\n");
    scanf("%d", &studentInfo.studentAge);

    // Display the student information
    printf("\nStudent Information:\n");
    printf("ID: %s\n", studentInfo.studentID);
    printf("Name: %s\n", studentInfo.studentName);
    printf("Age: %d\n", studentInfo.studentAge);

    return 0;
}