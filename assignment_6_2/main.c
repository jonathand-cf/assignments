#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int main()
{
// 'students' is a pointer to a dynamically allocated array of Student structs. Initially,
// it is set to NULL meaning it points to nothing. As we add students,
// memory will be allocated to hold the student information, starting with realloc().
    Student_t *students = NULL;
    int count = 0;
    char name[NAME_LENGTH];
    int age;

    printf("Enter student information (name and age). Type 'stop' as the name to end input:\n");

// Loops the "enter name and age" and allocates memory until "stop" is entered :)
    while (1)
    {
        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0; // Remove the newline character if present

        if (strcmp(name, "stop") == 0)
        {
            break;
        }

        printf("Enter age: ");
        if (scanf("%d", &age) != 1) {
            printf("Invalid input. Please enter a valid age.\n");
            while (getchar() != '\n'); // Clear the input buffer
            continue;
        }
        getchar(); // Consume the newline character left by scanf

        students = realloc(students, (count + 1) * sizeof(Student_t));
        if (students == NULL)
        {
            perror("Failed to allocate memory");
            exit(EXIT_FAILURE);
        }

        students[count].name = malloc(strlen(name) + 1);
        if (students[count].name == NULL)
        {
            perror("Failed to allocate memory");
            exit(EXIT_FAILURE);
        }
        strcpy(students[count].name, name);
        students[count].age = age;
        count++;
    }
// Checks if 0 names were given if not it will print all the names and ages and counts + youngest and oldest
    if (count == 0)
    {
        printf("No students were given\n");
    } else
    {
        printf("Count: %d\n", count);
        for (int i = 0; i < count; i++)
        {
            printf("Name = %s, Age = %d\n", students[i].name, students[i].age);
        }

        int youngest_index = 0;
        int oldest_index = 0;

        for (int i = 1; i < count; i++)
        {
            if (students[i].age < students[youngest_index].age)
            {
                youngest_index = i;
            }
            if (students[i].age > students[oldest_index].age)
            {
                oldest_index = i;
            }
        }

        printf("Youngest: %s\n", students[youngest_index].name);
        printf("Oldest: %s\n", students[oldest_index].name);
    }
// Free
    for (int i = 0; i < count; i++)
    {
        free(students[i].name);
    }
    free(students);

    return 0;
}