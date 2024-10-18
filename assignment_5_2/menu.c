#include <stdio.h>
#include "fileOperations.h"
#include "menu.h"

// Function to display the menu and get the user's choice
int displayMenu()
{
    int choice;

    printf("\nMenu:\n");
    printf("1. Read student information from file\n");
    printf("2. Write student information to file\n");
    printf("3. Exit\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);
    getchar();  // To consume the newline character left by scanf

    return choice;
}

// Function to process the menu choice
void processChoice(int choice)
{
    switch (choice)
    {
    case 1:
        readStudentFromFile();  // Call the file reading function
        break;
    case 2:
        writeStudentToFile();   // Call the file writing function
        break;
    case 3:
        printf("Exiting the program...\n");
        break;
    default:
        printf("Invalid choice! Please select 1, 2, or 3.\n");
    }
}
