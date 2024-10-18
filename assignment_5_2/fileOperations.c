#include <stdio.h>
#include <string.h>
#include "fileOperations.h"

// Function to read student information from a file
void readStudentFromFile() {
    FILE *file = fopen("student_read.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open student_read.txt\n");
        return;
    }

    studentInfo_t studentInfo;

    // Reading student info from file
    fscanf(file, "%d", &studentInfo.studentID);  // Now we read an int for studentID
    fgetc(file);  // Consume newline after studentID

    fgets(studentInfo.studentName, NAME_SIZE, file);
    studentInfo.studentName[strcspn(studentInfo.studentName, "\n")] = '\0';  // Remove newline

    fscanf(file, "%d", &studentInfo.studentAge);

    // Display the student information
    printf("\nStudent Information from File:\n");
    printf("Student id: %d\n", studentInfo.studentID);
    printf("Name: %s\n", studentInfo.studentName);
    printf("Age: %d\n", studentInfo.studentAge);

    fclose(file);
}

// Function to write student information to a file
void writeStudentToFile() {
    studentInfo_t studentInfo;

    // Prompt for student information
    printf("Please enter your ID (e.g., 3872187):\n");
    scanf("%d", &studentInfo.studentID);  // Now we read studentID as an int
    getchar();  // Consume the newline character left by scanf

    printf("Please enter your name (e.g., John Doe):\n");
    fgets(studentInfo.studentName, NAME_SIZE, stdin);
    studentInfo.studentName[strcspn(studentInfo.studentName, "\n")] = '\0';  // Remove newline

    printf("Please enter your age (e.g., 21):\n");
    scanf("%d", &studentInfo.studentAge);
    getchar();  // Consume the newline character left by scanf

    // Write the student information to file
    FILE *file = fopen("student_write.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open student_write.txt\n");
        return;
    }

    fprintf(file, "%d\n", studentInfo.studentID);  // Write studentID as an int
    fprintf(file, "%s\n", studentInfo.studentName);
    fprintf(file, "%d\n", studentInfo.studentAge);

    printf("Student information written to student_write.txt successfully.\n");

    fclose(file);
}