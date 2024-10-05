#include <stdio.h>
#include <string.h>
#define CHAR_SIZE 100
char str1[CHAR_SIZE] = { 0 };
char str2[CHAR_SIZE] = { 0 };

void search_string()
{
    if (strlen(str1) == 0 || strlen(str2) == 0)
    {
        printf("One or both strings are empty\n");
        return;
    }
    if (strstr(str1, str2) != NULL)
        printf("Word 2 is a substring of word 1");
    else if (strstr(str2, str1) != NULL)
        printf("Word 1 is a substring of word 2");
    else
        printf("No substrings found\n");
}

void string_compare()
{

    printf("Enter two strings, 1: ");
    fgets(str1, CHAR_SIZE, stdin);
    printf("Enter two strings, 2: ");
    fgets(str2, CHAR_SIZE, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    // Compare the two strings. strcmp() returns 0 when the two strings are equal.
    if (strcmp(str1, str2) == 0)
        printf("The words are equal\n");
    else
        printf("The words are not equal\n");
}

int main(void)
    {
        string_compare();
        search_string();
        return 0;
    }